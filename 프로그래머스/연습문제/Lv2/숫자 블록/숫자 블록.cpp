#include <string>
#include <vector>
using namespace std;

#define MAX_DIV 10000000

vector<int> solution(long long begin, long long end) {
    vector<int> answer(end-begin+1, 1);
    if(begin == 1) answer[0] = 0;
    
    for(long long i=begin; i<=end; i++){
        // 1이면 0
        if(i == 1) continue;
        // 아니면 제일 큰 약수 찾기
        else{
            long long max_divisor = 1;
            for(long long j=2; j*j<=i; j++){
                if(!(i%j)){
                    if(i/j <= MAX_DIV){
                        answer[i-begin] = i/j;
                        break;
                    }
                    else max_divisor = j;
                }
                if(!(i%j) && i/j<=MAX_DIV){
                    answer[i-begin] = i/j;
                    break;
                }
            }
            
            if(answer[i-begin]==1 && max_divisor!=1)
                answer[i-begin] = max_divisor;
        }
    }
    
    return answer;
}
