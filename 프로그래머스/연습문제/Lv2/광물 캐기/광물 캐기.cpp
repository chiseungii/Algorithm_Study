#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(vector<int> v1, vector<int> v2){
    if(v1[0] == v2[0]){
        if(v1[1] == v2[1]) return v1[2] > v2[2];
        else return v1[1] > v2[1];
    }
    else return v1[0] > v2[0];
}

int solution(vector<int> picks, vector<string> minerals) {
    vector<int> tools;  // 도구들 저장 0: dia, 1: iron, 2: stone
    for(int i=0; i<picks.size(); i++)
        for(int j=0; j<picks[i]; tools.push_back(i), j++);
    
    vector<vector<int>> mines;  // {diamond, iron, stone}의 개수
    vector<int> v = {0, 0, 0};
    // 광물을 5개씩 자르기
    for(int i=0; i<minerals.size(); i++){
        if(minerals[i] == "diamond") v[0]++;
        else if(minerals[i] == "iron") v[1]++;
        else v[2]++;
        
        if(!((i+1)%5) || i==minerals.size()-1){
            mines.push_back(v);
            v = {0, 0, 0};
        }
        
        // 곡괭이 개수 넘어가면 끝
        if(mines.size() == tools.size()) break;
    }
    
    // 다이아몬드 -> 철 -> 돌 개수 순으로 정렬
    sort(mines.begin(), mines.end(), compare);
    
    // 차례로 쓰기
    int cnt=0, idx=0;
    for(vector<int> mine : mines){
        if(tools[idx] == 0)
            cnt += (mine[0]+mine[1]+mine[2]);
        else if(tools[idx] == 1)
            cnt += (mine[0]*5+mine[1]+mine[2]);
        else
            cnt += (mine[0]*25+mine[1]*5+mine[2]);
        
        idx++;
        if(idx >= tools.size()) break;
    }
    
    return cnt;
}
