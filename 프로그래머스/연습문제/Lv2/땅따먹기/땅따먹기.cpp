#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int> > land){
    vector<vector<int>> DP;
    DP.push_back(land[0]);
    for(int i=1; i<land.size(); i++){
        vector<int> v(land[0].size(), 0);
        DP.push_back(v);
    }
    
    for(int i=1; i<land.size(); i++){
        for(int j=0; j<land[0].size(); j++){
            int max = 0;
            for(int k=0; k<land[0].size(); k++){
                if(j == k) continue;
                else if(DP[i-1][k] > max) max = DP[i-1][k];
            }
            DP[i][j] = max+land[i][j];
        }
    }
    
    return *max_element(DP[land.size()-1].begin(), DP[land.size()-1].end());
}
