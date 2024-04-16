#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<long long> DP(101, 0);
    DP[1] = DP[2] = DP[3] = 1;

    for(int i=4; i<101; i++)
        DP[i] = DP[i-2]+DP[i-3];

    int T; cin>>T;
    for(int tc=0; tc<T; tc++) {
        int N; cin>>N;
        cout<<DP[N]<<endl;
    }
}
