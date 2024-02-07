#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> money) {
    vector<vector<int>> DP; // DP[0]: 턴다, DP[1]: 털지 않는다
    for(int i=0; i<2; i++){
        vector<int> v(money.size(), 0);
        DP.push_back(v);
    }
    
    // 첫 집을 턴다
    DP[0][0] = money[0];
    DP[1][0] = 0;
    for(int i=1; i<money.size(); i++){
        DP[0][i] = DP[1][i-1]+money[i];
        DP[1][i] = max(DP[0][i-1], DP[1][i-1]);
    }
    int max_money = DP[1][money.size()-1];
    
    // 마지막 집을 턴다
    DP[0][money.size()-1] = money[money.size()-1];
    DP[1][money.size()-1] = 0;
    for(int i=money.size()-2; i>=0; i--){
        DP[0][i] = DP[1][i+1]+money[i];
        DP[1][i] = max(DP[0][i+1], DP[1][i+1]);
    }
    max_money = max(max_money, DP[1][0]);
    
    return max_money;
}
