#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> cores) {
    // n이 코어 개수 이하면 n번째가 정답
    if(n <= cores.size()) return n;
    
    int left=0, right=*max_element(cores.begin(), cores.end())*n;
    int answer;
    
    while(left <= right){
        int mid = (right-left)/2+left;
        
        // mid 시간 내에 할 수 있는 작업량
        int cnt = cores.size();
        for(int core : cores) cnt += (mid/core);
        
        // n개가 가능한지
        if(cnt >= n){
            answer = mid;
            right = mid-1;
        }
        else left = mid+1;
    }
    
    // answer-1 시간까지의 작업량 빼주기
    n -= cores.size();
    for(int c : cores)
        n -= (answer-1)/c;
    
    // 남은 n개를 가능한 코어에 넣기
    for(int i=0; i<cores.size(); i++){
        if(!(answer%cores[i])) n--;
        if(n == 0) return i+1;
    }
}
