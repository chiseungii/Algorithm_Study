#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(vector<int> v1, vector<int> v2){
    return v1[2] < v2[2];
}

int solution(int n, vector<vector<int>> costs) {
    vector<int> parents;
    for(int i=0; i<n; parents.push_back(i++));
    
    // 비용이 적은 순으로 정렬
    sort(costs.begin(), costs.end(), compare);
    
    int min_cost=0;
    for(vector<int> cost : costs){
        // 이미 연결된 다리면 패스
        if(parents[cost[0]] == parents[cost[1]])
            continue;
        
        // 다리 연결하기
        min_cost += cost[2];
        
        int tmp = parents[cost[1]];
        int p = parents[cost[0]];
        for(int i=0; i<n; i++)
            if(parents[i] == tmp) parents[i] = p;
        
        // 모든 부모 노드가 같으면 끝내기
        bool flag = true;
        for(int i=1; i<n; i++){
            if(parents[i] != parents[0]){
                flag = false;
                break;
            }
        }
        
        if(flag) break;
    }
    
    return min_cost;
}
