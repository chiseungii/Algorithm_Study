#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int BFS(vector<string> &maps, int i, int j){
    queue<pair<int,int>> q;
    q.push(make_pair(i, j));
    
    int cnt = maps[i][j]-'0';
    maps[i][j] = 'X';
    
    // 상, 우, 하, 좌
    int di[4] = {-1, 0, 1, 0};
    int dj[4] = {0, 1, 0, -1};
    
    while(q.size()){
        int tmp_i = q.front().first;
        int tmp_j = q.front().second;
        q.pop();
        
        for(int i=0; i<4; i++){
            int move_i = tmp_i+di[i];
            int move_j = tmp_j+dj[i];
            
            if(move_i<0 || move_i>=maps.size()) continue;
            if(move_j<0 || move_j>=maps[0].size()) continue;
            
            if(maps[move_i][move_j] != 'X'){
                q.push(make_pair(move_i, move_j));
                cnt += (maps[move_i][move_j]-'0');
                maps[move_i][move_j] = 'X';
            }
        }
    }
    
    return cnt;
}

vector<int> solution(vector<string> maps) {
    vector<int> answer;
    for(int i=0; i<maps.size(); i++){
        for(int j=0; j<maps[0].size(); j++){
            if(maps[i][j] != 'X'){
                answer.push_back(BFS(maps, i, j));
            }
        }
    }
    
    if(answer.empty()) answer.push_back(-1);
    sort(answer.begin(), answer.end());
    
    return answer;
}
