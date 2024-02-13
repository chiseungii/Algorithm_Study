#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int n, vector<vector<int>> computers) {
    vector<bool> visit(n, false);
    
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(visit[i]) continue;
        
        queue<int> q;
        q.push(i);
        visit[i] = true;
        while(!q.empty()){
            int tmp = q.front();
            q.pop();
            
            for(int j=0; j<n; j++){
                if(!visit[j] && computers[tmp][j]){
                    q.push(j);
                    visit[j] = true;
                }
            }
        }
        cnt++;
    }
    
    return cnt;
}
