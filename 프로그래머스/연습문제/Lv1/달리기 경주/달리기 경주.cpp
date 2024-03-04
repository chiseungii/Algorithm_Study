#include <string>
#include <vector>
#include <map>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    map<string, int> m; // <이름, 인덱스>
    for(int i=0; i<players.size(); i++)
        m[players[i]] = i;
    
    for(string call : callings){
        int idx = m[call];
        
        players[idx] = players[idx-1];
        players[idx-1] = call;
        
        m[call] = idx-1;
        m[players[idx]] = idx;
    }
    
    return players;
}
