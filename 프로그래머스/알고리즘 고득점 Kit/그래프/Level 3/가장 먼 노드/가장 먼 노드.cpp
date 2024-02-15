#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int solution(int n, vector<vector<int>> edge) {
    // 그래프 만들기
    vector<vector<bool>> graph;
    for(int i=0; i<=n; i++){
        vector<bool> v(n+1, false);
        graph.push_back(v);
    }
    
    for(vector<int> e : edge)
        graph[e[0]][e[1]] = graph[e[1]][e[0]] = true;
    
    // 1번 노드부터 BFS 돌리기
    vector<int> visit(n+1, 0);
    queue<int> q;    // <노드 번호, 1번부터의 거리>
    q.push(1);
    visit[1] = 0;
    
    while(q.size()){
        int tmp = q.front();
        q.pop();
        
        for(int i=2; i<=n; i++){
            if(visit[i]==0 && graph[tmp][i]){
                q.push(i);
                visit[i] = visit[tmp]+1;
            }
        }
    }
    
    int max_dist = *max_element(visit.begin(), visit.end());
    int cnt = 0;
    for(int v : visit)
        if(v == max_dist) cnt++;
    
    return cnt;
}
