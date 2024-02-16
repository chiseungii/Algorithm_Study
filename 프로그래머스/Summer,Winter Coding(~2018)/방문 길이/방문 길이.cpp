#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(string dirs) {
    // <<x, y>, "0000">: "상하좌우"
    map<pair<int, int>, string> m;
    
    // init
    for(int i=0; i<12; i++)
        for(int j=0; j<12; j++)
            m[{i, j}] = "0000";
    
    int x=5, y=5, cnt=0;
    for(int i=0; i<dirs.length(); i++){
        // 위로 이동
        if(dirs[i]=='U' && y<10){
            if(m[{x, y}][0]== '0') cnt++;
            m[{x, y}][0] = '1';
            m[{x, y+1}][1] = '1';
            y++;
        }
        // 아래로 이동
        else if(dirs[i]=='D' && y>0){
            if(m[{x, y}][1] == '0') cnt++;
            m[{x, y}][1] = '1';
            m[{x, y-1}][0] = '1';
            y--;
        }
        // 오른쪽으로 이동
        else if(dirs[i]=='R' && x<10){
            if(m[{x, y}][3] == '0') cnt++;
            m[{x, y}][3] = '1';
            m[{x+1, y}][2] = '1';
            x++;
        }
        // 왼쪽으로 이동
        else if(dirs[i]=='L' && x>0){
            if(m[{x, y}][2] == '0') cnt++;
            m[{x, y}][2] = '1';
            m[{x-1, y}][3] = '1';
            x--;
        }
    }
    
    return cnt;
}
