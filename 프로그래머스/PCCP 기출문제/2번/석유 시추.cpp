#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
using namespace std;

vector<vector<int>> visit;   // BFS visit
vector<int> verticals;   // 열마다 시추 양
map<int, int> m;    // <시추 번호, 시추 양>
map<int, set<int>> numbers; // <열 번호, 시추 번호>

void BFS(int n, int i, int j){
    queue<pair<int, int>> q;
    q.push(make_pair(i, j));
    visit[i][j] = n;
    numbers[j].insert(n);
    int cnt = 1;
    
    int di[4] = {-1, 0, 1, 0};
    int dj[4] = {0, 1, 0, -1};
    
    while(q.size()){
        int tmp_i = q.front().first;
        int tmp_j = q.front().second;
        q.pop();
        
        for(int i=0; i<4; i++){
            int move_i = tmp_i+di[i];
            int move_j = tmp_j+dj[i];
            
            if(move_i<0 || move_i>=visit.size()) continue;
            if(move_j<0 || move_j>=visit[0].size()) continue;
            
            if(visit[move_i][move_j] == 1){
                q.push(make_pair(move_i, move_j));
                visit[move_i][move_j] = n;
                numbers[move_j].insert(n);
                cnt++;
            }
        }
    }
    
    m[n] = cnt;
    return;
}

int solution(vector<vector<int>> land) {
    visit = land;
    int n = 2;
    
    for(int i=0; i<land.size(); i++){
        for(int j=0; j<land[0].size(); j++){
            if(visit[i][j] == 1){
                BFS(n, i, j);
                n++;
            }
        }
    }
    
    vector<int> verticals(land[0].size(), 0);   // 열마다 시추 양
    for(int i=0; i<land[0].size(); i++){
        set<int>::iterator it;
        for(it=numbers[i].begin(); it!=numbers[i].end(); it++)
            verticals[i] += m[*it];
    }
    
    return *max_element(verticals.begin(), verticals.end());
}
