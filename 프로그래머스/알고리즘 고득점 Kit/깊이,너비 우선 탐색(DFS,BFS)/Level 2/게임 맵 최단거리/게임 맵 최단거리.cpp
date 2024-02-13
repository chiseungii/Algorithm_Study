#include <vector>
#include <queue>
using namespace std;

int solution(vector<vector<int>> maps){
    vector<vector<int>> visit;
    for(int i=0; i<maps.size(); i++){
        vector<int> v(maps[0].size(), 0);
        visit.push_back(v);
    }
    
    // 상우하좌
    int di[4]={-1, 0, 1, 0}, dj[4]={0, 1, 0, -1};
    visit[0][0] = 1;
    queue<pair<int, int>> q;
    q.push(make_pair(0, 0));
    
    while(q.size()){
        int tmp_i = q.front().first;
        int tmp_j = q.front().second;
        q.pop();
        
        for(int i=0; i<4; i++){
            int move_i = tmp_i+di[i];
            int move_j = tmp_j+dj[i];
            
            if(move_i<0 || move_i>=maps.size()) continue;
            if(move_j<0 || move_j>=maps[0].size()) continue;
            
            if(maps[move_i][move_j] && visit[move_i][move_j]==0){
                q.push(make_pair(move_i, move_j));
                visit[move_i][move_j] = visit[tmp_i][tmp_j]+1;
            }
        }
    }
    
    int answer = visit[maps.size()-1][maps[0].size()-1];
    return answer ? answer : -1;
}
