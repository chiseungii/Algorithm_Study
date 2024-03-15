#include <string>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

bool compare(pair<string, pair<int,int>> p1, pair<string, pair<int,int>> p2){
    return p1.second.first < p2.second.first;
}

vector<string> solution(vector<vector<string>> plans) {
    vector<pair<string, pair<int,int>>> v;
    // <과제 이름, <시작 시각(분), 걸리는 시간(분)>>
    for(vector<string> plan : plans){
        int start = stoi(plan[1].substr(0,2))*60+stoi(plan[1].substr(3));
        v.push_back(make_pair(plan[0], make_pair(start, stoi(plan[2]))));
    }
    
    // 시작 시각이 빠른 순으로 정렬
    sort(v.begin(), v.end(), compare);
    
    stack<pair<string,int>> st; // 대기열
    int now = v[0].second.first;    // 현재 시각
    int idx = 0;
    
    vector<string> answer;
    while(idx < v.size()){
        // 현재 과제 시작 전이면 대기열에 있는 거 처리
        while(now<v[idx].second.first && st.size()){
            pair<string, int> tmp = st.top();
            st.pop();
                
            int pos = v[idx].second.first-now;
            if(pos >= tmp.second){
                answer.push_back(tmp.first);
                now += tmp.second;
            }
            else{
                tmp.second -= pos;
                st.push(tmp);
                now += pos;
            }
        }
        
        // 마지막 과제면 그냥 끝내기
        if(idx == v.size()-1){
            answer.push_back(v[idx].first);
            break;
        }
        // 마지막 아니고 과제를 끝낼 수 있으면 끝내기
        else if(v[idx].second.first+v[idx].second.second <= v[idx+1].second.first){
            answer.push_back(v[idx].first);
            now = v[idx].second.first+v[idx].second.second;
            idx++;
        }
        // 다 못 끝내면 할 수 있는 만큼만 하기
        else{
            int pos = v[idx+1].second.first-v[idx].second.first;
            st.push(make_pair(v[idx].first, v[idx].second.second-pos));
            now = v[idx+1].second.first;
            idx++;
        }
    }
    
    // 대기열에 남아있으면 차례로 끝내기
    while(st.size()){
        answer.push_back(st.top().first);
        st.pop();
    }
    
    return answer;
}
