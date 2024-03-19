#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(vector<int> sequence) {
    vector<long long> DP[2];    // DP[0][i]: x1 했을 때, DP[1][i]: x(-1) 했을 때
    DP[0].push_back(sequence[0]);
    DP[1].push_back(-sequence[0]);
    
    for(int i=1; i<sequence.size(); i++){
        DP[0].push_back(max(DP[1][i-1]+sequence[i], (long long)sequence[i]));
        DP[1].push_back(max(DP[0][i-1]-sequence[i], (long long)-sequence[i]));
    }
    
    return max(*max_element(DP[0].begin(), DP[0].end()), *max_element(DP[1].begin(), DP[1].end()));
}
