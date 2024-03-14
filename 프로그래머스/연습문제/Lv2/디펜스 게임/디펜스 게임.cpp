#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n, int k, vector<int> enemy) {
    int left=0, right=enemy.size();
    int answer = 0;
    while(left <= right){
        int mid = (left+right)/2;
        
        // mid개의 적만 가져옴
        vector<int> v(enemy.begin(), enemy.begin()+mid);
        // 큰 순서로 정렬
        sort(v.begin(), v.end(), greater<int>());
        
        // 무적권으로 전부 처치 가능하면 mid 늘리기
        if(k >= v.size()){
            answer = mid;
            left = mid+1;
        }
        // 아니면 k명 만큼은 무적권으로 처치하고 가능한지 확인
        else{
            long long sum = 0;
            for(int i=k; i<v.size(); sum+=v[i++]);
            
            if(n >= sum){
                answer = mid;
                left = mid+1;
            }
            else right = mid-1;
        }
    }
    
    return answer;
}
