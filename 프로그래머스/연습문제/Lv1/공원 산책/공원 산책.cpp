#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    int x=-1, y=-1;
    for(int i=0; i<park.size(); i++){
        for(int j=0; j<park[0].length(); j++){
            if(park[i][j] == 'S'){
                x = i;
                y = j;
                break;
            }
        }
        
        if(x!=-1) break;
    }
    
    bool flag;
    for(string route : routes){
        char op = route[0];
        int dist = route[2]-'0';
        
        if(op == 'E'){
            if(y+dist >= park[0].size()) continue;
            
            flag = true;
            for(int i=1; i<=dist; i++){
                if(park[x][y+i] == 'X'){
                    flag = false;
                    break;
                }
            }
            
            if(flag) y += dist;
        }
        else if(op == 'W'){
            if(y-dist < 0) continue;
            
            flag = true;
            for(int i=1; i<=dist; i++){
                if(park[x][y-i] == 'X'){
                    flag = false;
                    break;
                }
            }
            
            if(flag) y -= dist;
        }
        else if(op == 'N'){
            if(x-dist < 0) continue;
            
            flag = true;
            for(int i=1; i<=dist; i++){
                if(park[x-i][y] == 'X'){
                    flag = false;
                    break;
                }
            }
            
            if(flag) x -= dist;
        }
        else{
            if(x+dist >= park.size()) continue;
            
            flag = true;
            for(int i=1; i<=dist; i++){
                if(park[x+i][y] == 'X'){
                    flag = false;
                    break;
                }
            }
            
            if(flag) x += dist;
        }
    }
    
    return {x, y};
}
