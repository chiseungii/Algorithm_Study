#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

#define INF 1000000

vector<int> solution(int n, vector<vector<int>> roads, vector<int> sources, int destination) {
    vector<vector<int>> graph;
    for(int i=0; i<=n; graph.push_back({}), i++);
    
    for(vector<int> road : roads){
        graph[road[0]].push_back(road[1]);
        graph[road[1]].push_back(road[0]);
    }
    
    // destination에서 출발해서 각 지점까지 최단거리 구하기
    // kruskal 알고리즘
    vector<int> dist(n+1, INF);
    vector<bool> visit(n+1, false);
    
    dist[destination] = 0;
    
    queue<int> q;
    q.push(destination);
    
    while(q.size()){
        int now = q.front();
        q.pop();
        visit[now] = true;
        
        for(int node : graph[now]){
            if(!visit[node]){
                q.push(node);
                if(dist[now]+1 < dist[node])
                    dist[node] = dist[now]+1;
            }
        }
    }
    
    vector<int> answer;
    for(int source : sources){
        if(dist[source] == INF) answer.push_back(-1);
        else answer.push_back(dist[source]);
    }
    
    return answer;
}
