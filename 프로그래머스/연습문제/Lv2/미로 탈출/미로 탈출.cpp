#include <string>
#include <vector>
#include <queue>
using namespace std;

int BFS(vector<string> maps, int start_i, int start_j, int lever_i, int lever_j){
    vector<vector<int>> visit;
    for(int i=0; i<maps.size(); i++){
        vector<int> v(maps[0].size(), -1);
        visit.push_back(v);
    }
    
    queue<pair<int,int>> q;
    q.push(make_pair(start_i, start_j));
    visit[start_i][start_j] = 0;
    
    int di[4] = {-1, 0, 1, 0};
    int dj[4] = {0, 1, 0, -1};
    
    while(q.size()){
        int tmp_i = q.front().first;
        int tmp_j = q.front().second;
        q.pop();
        
        if(tmp_i==lever_i && tmp_j==lever_j)
            return visit[tmp_i][tmp_j];
        
        for(int i=0; i<4; i++){
            int move_i = tmp_i+di[i];
            int move_j = tmp_j+dj[i];
            
            if(move_i<0 || move_i>=maps.size()) continue;
            if(move_j<0 || move_j>=maps[0].size()) continue;
            
            if(visit[move_i][move_j]==-1 && maps[move_i][move_j]!='X'){
                q.push(make_pair(move_i, move_j));
                visit[move_i][move_j] = visit[tmp_i][tmp_j]+1;
            }
        }
    }
    
    return visit[lever_i][lever_j];
}

int solution(vector<string> maps) {
    pair<int,int> start, lever, exit;
    for(int i=0; i<maps.size(); i++){
        for(int j=0; j<maps[0].size(); j++){
            if(maps[i][j] == 'S'){
                start.first = i;
                start.second = j;
            }
            else if(maps[i][j] == 'L'){
                lever.first = i;
                lever.second = j;
            }
            else if(maps[i][j] == 'E'){
                exit.first = i;
                exit.second = j;
            }
        }
    }
    
    int toLever = BFS(maps, start.first, start.second, lever.first, lever.second);
    int toExit = BFS(maps, lever.first, lever.second, exit.first, exit.second);
    
    if(toLever==-1 || toExit==-1) return -1;
    else return toLever+toExit;
}
