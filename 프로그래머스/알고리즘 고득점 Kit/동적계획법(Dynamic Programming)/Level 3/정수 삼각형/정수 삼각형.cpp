#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> triangle) {
    vector<vector<int>> DP;
    int len = triangle.size();
    for(int i=0; i<len; i++){
        vector<int> v(len, 0);
        DP.push_back(v);
    }
    DP[0][0] = triangle[0][0];
    
    for(int i=1; i<len; i++){
        DP[i][0] = DP[i-1][0]+triangle[i][0];
        DP[i][i] = DP[i-1][i-1]+triangle[i][i];
        
        for(int j=1; j<i; j++){
            int a = DP[i-1][j]+triangle[i][j];
            int b = DP[i-1][j-1]+triangle[i][j];
            
            if(a >= b) DP[i][j] = a;
            else DP[i][j] = b;
        }
    }
    
    int max_num = DP[len-1][0];
    for(int i=1; i<len; i++)
        if(DP[len-1][i] > max_num)
            max_num = DP[len-1][i];
    
    return max_num;
}
