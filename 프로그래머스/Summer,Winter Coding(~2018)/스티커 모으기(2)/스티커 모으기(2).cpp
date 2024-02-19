#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> sticker){
    // 경계값
    if(sticker.size() == 1) return sticker[0];
    
    vector<int> DP[2];  // DP[0][i]: 뜯을 때, DP[1][i]: 안 뜯을 때
    
    for(int i=0; i<sticker.size(); i++){
        DP[0].push_back(0);
        DP[1].push_back(0);
    }
    // 첫번째 스티커 반드시 뜯는 경우
    DP[0][0] = sticker[0];
    for(int i=1; i<sticker.size()-1; i++){
        DP[0][i] = DP[1][i-1]+sticker[i];
        DP[1][i] = max(DP[0][i-1], DP[1][i-1]);
    }
    
    // 결과
    int answer = max(DP[0][sticker.size()-2], DP[1][sticker.size()-2]);
    
    for(int i=0; i<sticker.size(); i++)
        DP[0][i] = DP[1][i] = 0;
    // 마지막 스티커 반드시 뜯는 경우
    DP[0][sticker.size()-1] = sticker[sticker.size()-1];
    for(int i=sticker.size()-2; i>0; i--){
        DP[0][i] = DP[1][i+1]+sticker[i];
        DP[1][i] = max(DP[0][i+1], DP[1][i+1]);
    }
    
    return max(answer, max(DP[0][1], DP[1][1]));
}
