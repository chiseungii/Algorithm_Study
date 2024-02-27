#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

long long solution(int a, int b, vector<int> g, vector<int> s, vector<int> w, vector<int> t) {
    // 이분탐색
    long long left=0, right=pow(10, 14)*4;
    long long answer = right;
    
    while(left <= right){
        long long mid = (left+right)/2;
        
        // mid 시간 내에 운반이 가능한지 확인
        long long gold=0, silver=0, mix=0;
        for(int i=0; i<t.size(); i++){
            // t[i]로 mid 시간 내에 총 몇번 운행 가능한지
            if(mid < t[i]) continue;
            long long cnt = 1+(mid-t[i])/(t[i]*2);
            
            // cnt번 내에 옮길 수 있는 금, 은, (금+은)의 양 구하기
            gold += min((long long)g[i], cnt*w[i]);
            silver += min((long long)s[i], cnt*w[i]);
            mix += min((long long)(g[i]+s[i]), cnt*w[i]);
        }
        
        // 금, 은, (금+은)의 양이 충분하면 시간 더 줄이기
        if(gold>=a && silver>=b && mix>=a+b){
            answer = mid;
            right = mid-1;
        }
        // 하나라도 충족 안 되면 시간 늘리기
        else left = mid+1;
    }
    
    return answer;
}
