#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T; cin>>T;
    for(int tc=0; tc<T; tc++) {
        int N,M; cin>>N>>M;
        vector<vector<int>> DP;
        for(int i=0; i<M+1; i++) {
            vector<int> v(M+1);
            DP.push_back(v);
        }

        DP[0][0] = 1;
        for(int i=1; i<=M; i++) {
            DP[i][0] = DP[i][i] = 1;
            for(int j=1; j<i; j++)
                DP[i][j] = DP[i-1][j-1]+DP[i-1][j];
        }

        cout<<DP[M][N]<<endl;
    }
}
