#include <string>
#include <vector>

using namespace std;

#define MOD 1234567

long long solution(int n) {
    // DP[i]: i개의 칸을 뛰는 방법
    vector<long long> DP = {1, 2};
    
    for(int i=2; i<n; i++)
        DP.push_back((DP[i-1]+DP[i-2])%MOD);
    
    return DP[n-1];
}
