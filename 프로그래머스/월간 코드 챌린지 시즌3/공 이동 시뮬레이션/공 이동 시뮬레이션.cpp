#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(int n, int m, int x, int y, vector<vector<int>> queries) {
    pair<long long, long long> start = make_pair(x, y);
    pair<long long, long long> end = make_pair(x, y);
    
    for(int i=queries.size()-1; i>=0; i--){
        long long dir = queries[i][0];
        long long dist = queries[i][1];
        
        // 0: 오른쪽으로
        if(dir == 0){
            // 벽에 붙어있으면 시작점은 그대로
            if(start.second != 0) start.second += dist;
            
            end.second += dist;
            if(end.second >= m) end.second = m-1;
        }
        // 1: 왼쪽으로
        else if(dir == 1){
            start.second -= dist;
            if(start.second < 0) start.second = 0;
            
            if(end.second != m-1) end.second -= dist;
        }
        // 2: 아래로
        else if(dir == 2){
            if(start.first != 0) start.first += dist;
            
            end.first += dist;
            if(end.first >= n) end.first = n-1;
        }
        // 3: 위로
        else{
            start.first -= dist;
            if(start.first < 0) start.first = 0;
            
            if(end.first != n-1) end.first -= dist;
        }
        
        if(start.first>=n || end.first<0 || start.second>=m || end.second<0)
            return 0;
    }
    
    long long w = abs(end.first-start.first)+1;
    long long h = abs(end.second-start.second)+1;
    
    return w*h;
}
