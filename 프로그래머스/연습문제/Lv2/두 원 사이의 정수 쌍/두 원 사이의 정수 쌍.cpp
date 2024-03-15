#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(int r1, int r2) {
    long long answer = 8;   // 두 원 꼭짓점 8개
    
    long long r = 1;
    while(1){
        long long a = (long long)r1*(long long)r1-r*r;
        // a가 제곱수가 아니면 +1
        long long sqrt_a = sqrt(a);
        if(sqrt_a*sqrt_a != a) sqrt_a++;
        
        long long b = sqrt((long long)r2*(long long)r2-r*r);
        
        // b가 0이면 끝
        if(b==0) break;
        // a가 0이면 +1
        else if(sqrt_a==0) sqrt_a++;
        // a가 0보다 작으면 1로 만들고 2개 더하기
        else if(sqrt_a < 0){
            sqrt_a = 1;
            answer += 2;
        }
        
        answer += 4*(b-sqrt_a+1);
        r++;
    }
    
    answer += 2*(r2-r1-1);
    return answer;
}
