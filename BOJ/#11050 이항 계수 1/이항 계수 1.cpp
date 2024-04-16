#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N,K; cin>>N>>K;
    vector<vector<int>> DP;
    for(int i=0; i<=N; i++) {
        vector<int> v(N+1);
        DP.push_back(v);
    }

    DP[0][0] = 1;
    for(int i=1; i<=N; i++) {
        DP[i][0] = DP[i][i] = 1;
        for(int j=1; j<N; j++)
            DP[i][j] = DP[i-1][j-1]+DP[i-1][j];
    }

    cout<<DP[N][K];
}
