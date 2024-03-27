#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    map<string, int> m;  // 이름을 인덱스 번호로 변환
    for(int i=0; i<friends.size(); i++)
        m[friends[i]] = i;
    
    // 선물 받은 현황 2차원 배열로 정리
    vector<vector<int>> given;  // given[i][j]: i가 j에게 준 횟수
    for(int i=0; i<friends.size(); i++){
        vector<int> v(friends.size(), 0);
        given.push_back(v);
    }
    
    for(string gift : gifts){
        string a, b;    // 준 사람, 받은 사람
        for(int i=0; i<gift.length(); i++){
            if(gift[i] == ' '){
                a = gift.substr(0, i);
                b = gift.substr(i+1);
                break;
            }
        }
        
        given[m[a]][m[b]]++;
    }
    
    // 각각의 선물 지수 계산
    vector<int> scores(friends.size(), 0);
    
    for(int i=0; i<friends.size(); i++){
        for(int j=0; j<friends.size(); j++){
            if(given[i][j]){
                scores[i] += given[i][j];
                scores[j] -= given[i][j];
            }
        }
    }
    
    // 선물 받을 사람 계산
    vector<int> cnt(friends.size(), 0);
    
    for(int i=0; i<friends.size()-1; i++){
        for(int j=i+1; j<friends.size(); j++){
            // 서로가 서로에게 준 횟수 계산
            int a = given[i][j];
            int b = given[j][i];
            
            // 횟수가 같으면 선물 지수 비교
            if(a == b){
                if(scores[i] > scores[j]) cnt[i]++;
                else if(scores[i] < scores[j]) cnt[j]++;
            }
            // 횟수 다르면 많이 준 사람이 받기
            else{
                if(a > b) cnt[i]++;
                else cnt[j]++;
            }
        }
    }
    
    return *max_element(cnt.begin(), cnt.end());
}
