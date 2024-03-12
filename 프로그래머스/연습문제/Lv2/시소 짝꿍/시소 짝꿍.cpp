#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(vector<int> weights) {
    sort(weights.begin(), weights.end());
    
    long long cnt = 0;
    for(int i=0; i<weights.size()-1; i++){
        for(int j=i+1; j<weights.size(); j++){
            if(weights[i] == weights[j]) cnt++;
            else if(weights[j] == weights[i]*2) cnt++;
            else if(weights[i]*3 == weights[j]*2) cnt++;
            else if(weights[i]*4 == weights[j]*3) cnt++;
        }
    }
    
    return cnt;
}
