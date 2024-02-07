#include <string>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int solution(int m, int n, vector<vector<int>> puddles) {
    vector<vector<int>> DP;
    for(int i=0; i<n; i++){
        vector<int> v(m, 0);
        DP.push_back(v);
    }    
    DP[0][0] = 1;
    
    // 물에 잠긴 곳 -1로 채우기
    for(vector<int> puddle : puddles)
        DP[puddle[1]-1][puddle[0]-1] = -1;
    
    // 제일 윗줄 채우기
    for(int i=1; i<m; i++){
        if(DP[0][i] == -1) DP[0][i] = 0;
        else DP[0][i] = DP[0][i-1];
    }
    // 제일 왼쪽 채우기
    for(int i=1; i<n; i++){
        if(DP[i][0] == -1) DP[i][0] = 0;
        else DP[i][0] = DP[i-1][0];
    }
    
    // 물에 안 잠긴 곳만 경로 계산
    for(int i=1; i<n; i++){
        for(int j=1; j<m; j++){
            if(DP[i][j] == -1) DP[i][j] = 0;
            else DP[i][j] = (DP[i-1][j]+DP[i][j-1])%MOD;
        }
    }
    
    return DP[n-1][m-1];
}
