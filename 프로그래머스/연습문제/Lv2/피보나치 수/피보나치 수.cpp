#include <string>
#include <vector>

using namespace std;

#define MOD 1234567

int solution(int n) {
    vector<int> DP(n+1, 0);
    DP[1] = 1;
    
    for(int i=2; i<=n; i++)
        DP[i] = (DP[i-1]+DP[i-2])%MOD;
    
    return DP[n];
}
