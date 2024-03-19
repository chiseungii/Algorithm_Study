#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> money) {
    vector<int> DP(n+1, 0);
    DP[0] = 1;
    
    sort(money.begin(), money.end());
    for(int m : money){
        for(int i=m; i<=n; i++)
            DP[i] += DP[i-m];
    }
    
    return DP[n];
}
