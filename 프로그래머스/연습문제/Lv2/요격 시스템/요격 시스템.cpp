#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(vector<int> v1, vector<int> v2){
    if(v1[1] == v2[1]) return v1[0] < v1[0];
    else return v1[1] < v2[1];
}

int solution(vector<vector<int>> targets) {
    double bump = 0.0;
    int cnt = 0;
    // e가 작은 순으로 정렬
    sort(targets.begin(), targets.end(), compare);
    
    for(vector<int> target : targets){
        // 현재 target을 미사일로 쏠 수 있는지
        if(bump <= target[0]){
            cnt++;
            bump = target[1]-0.5;
        }
    }
    
    return cnt;
}
