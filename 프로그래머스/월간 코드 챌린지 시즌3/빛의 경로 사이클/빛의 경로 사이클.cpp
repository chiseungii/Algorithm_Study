#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> grid) {
    // visit[i][j][k]: (i,j)에서 k방향으로 간 적이 있는지
    vector<vector<vector<bool>>> visit;
    for(int i=0; i<grid.size(); i++){
        vector<vector<bool>> v;
        for(int j=0; j<grid[0].size(); j++){
            vector<bool> vv(4, false);
            v.push_back(vv);
        }
        visit.push_back(v);
    }
    
    // dir: 0(상)1(우)2(하)3(좌)
    vector<int> answer;
    for(int i=0; i<grid.size(); i++){
        for(int j=0; j<grid[0].size(); j++){
            for(int k=0; k<4; k++){
                if(!visit[i][j][k]){
                    visit[i][j][k] = true;
                    int cnt=0, x=i, y=j, dir=k;
                    
                    while(1){
                        cnt++;
                        
                        // 좌표 움직이기
                        switch(dir){
                            case 0: x--; break;
                            case 1: y++; break;
                            case 2: x++; break;
                            case 3: y--; break;
                        }
                        
                        // 범위 벗어났는지 체크
                        if(x < 0) x = grid.size()-1;
                        else if(x >= grid.size()) x = 0;
                        
                        if(y < 0) y = grid[0].size()-1;
                        else if(y >= grid[0].size()) y = 0;
                        
                        // 다음 방향 계산
                        switch(grid[x][y]){
                            case 'L': dir--; if(dir < 0) dir += 4;
                                break;
                            case 'R': dir++; dir%=4;
                                break;
                        }
                        
                        // 방문 체크
                        if(visit[x][y][dir]) break;
                        else visit[x][y][dir] = true;
                    }
                    answer.push_back(cnt);
                }
            }
        }
    }
    
    sort(answer.begin(), answer.end());
    return answer;
}
