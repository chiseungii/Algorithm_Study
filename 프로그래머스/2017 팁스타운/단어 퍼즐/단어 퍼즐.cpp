#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int solution(vector<string> strs, string t){
    vector<int> DP(t.length(), 0);  // DP[i]: t[i]까지 만들 수 있는 개수
    map<string, bool> m;    // is in strs 쓰기 위해
    for(string str : strs) m[str] = true;
    
    int len = t.length();
    
    // D[1] 계산
    if(m[t.substr(0, 1)]) DP[0] = 1;
    
    // DP 계산
    for(int i=1; i<t.length(); i++){    // t[i]까지
        vector<int> cnts;   // 가능한 조각 개수들
        for(int j=0; j<5; j++){ // 단어 조각 길이 j
            // j개보다 짧으면 끝
            if(i-j < 0) break;
            
            // 딱 j개일 때
            if(i==j && m[t.substr(0, j+1)]) cnts.push_back(1);
            else{
                // j개 조각
                string s = t.substr(i-j, j+1);
                // s가 strs 안에 있으면 DP에 기록
                if(m[s] && DP[i-j-1]) cnts.push_back(DP[i-j-1]+1);
            }
        }
        
        if(cnts.size()) DP[i] = *min_element(cnts.begin(), cnts.end());
    }
    
    return DP[len-1] ? DP[len-1] : -1;
}
