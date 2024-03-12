#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int,int> p1, pair<int,int> p2){
    if(p1.second == p2.second) return p1.first < p2.first;
    else return p1.second < p2.second;
}

int solution(vector<vector<string>> book_time) {
    vector<pair<int,int>> minutes;  // <입실 시간(분), 퇴실 시간(분)+청소 시간>
    for(vector<string> book : book_time){
        int in = stoi(book[0].substr(0,2))*60+stoi(book[0].substr(3));
        int out = stoi(book[1].substr(0,2))*60+stoi(book[1].substr(3))+10;
        minutes.push_back(make_pair(in, out));
    }
    
    // 퇴실 시간 -> 입실 시간 빠른 순으로 정렬
    sort(minutes.begin(), minutes.end(), compare);
    
    // 가능한 방 개수 찾기
    vector<int> outs;   // 퇴실 시간 모음
    for(pair<int,int> m : minutes){
        if(outs.empty()) outs.push_back(m.second);
        else{
            bool flag = false;
            for(int i=0; i<outs.size(); i++){
                if(m.first >= outs[i]){
                    flag = true;
                    outs[i] = m.second;
                    break;
                }
            }
            
            if(!flag) outs.push_back(m.second);
        }
        
        sort(outs.begin(), outs.end(), greater<int>());
    }
    
    return outs.size();
}
