#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(int n, vector<int> times) {
    // 시간 내림차순 정렬
    sort(times.begin(), times.end(), greater<int>());
    
    long long right = (long long)times[0]*(long long)n;   // 제일 오래 걸리는 심사대로 전부 다 갈 때
    long long left = 0;
    
    long long answer;
    while(left <= right){
        long long mid = (right+left)/2;
        
        // mid 시간 안에 전부 다 심사받을 수 있는지
        long long people = 0;
        for(int time : times) people += (mid/time);
        
        // 가능하면 시간 더 줄여보기
        if(people >= n){
            answer = mid;
            right = mid-1;
        }
        // 안 되면 시간 더 늘리기
        else left = mid+1;
    }
    
    return answer;
}
