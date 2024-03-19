#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(vector<int> v1, vector<int> v2){
    if(v1[0] == v2[0]) return v1[1] < v2[1];
    else return v1[0] > v2[0];
}

int solution(vector<vector<int>> scores) {
    vector<int> won = scores[0];    // 원호 점수
    // 첫번째 점수 오름차순 -> 두번째 점수 내림차순 정렬
    sort(scores.begin(), scores.end(), compare);
    
    int max_second = 0;
    vector<bool> fail(scores.size(), false);
    for(int i=0; i<scores.size(); i++){
        if(scores[i][0] == scores[0][0])
            max_second = scores[i][1];
        else{
            if(scores[i][1] < max_second)
                fail[i] = true;
            else if(scores[i][1] > max_second)
                max_second = scores[i][1];
        }
    }
    
    // 원호가 자격미달인지 확인
    for(int i=0; i<scores.size(); i++)
        if(scores[i]==won && fail[i]) return -1;
    
    // 자격 미달 빼고 점수 합 모으기
    vector<int> sums;
    for(int i=0; i<scores.size(); i++)
        if(!fail[i]) sums.push_back(scores[i][0]+scores[i][1]);
    
    sort(sums.begin(), sums.end(), greater<int>());
    
    // 원호 등수 확인
    for(int i=0; i<sums.size(); i++)
        if(sums[i] == won[0]+won[1]) return i+1;
}
