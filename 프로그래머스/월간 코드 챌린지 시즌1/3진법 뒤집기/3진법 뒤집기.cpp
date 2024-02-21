#include <string>
#include <vector>
#include <iostream>
using namespace std;

long long solution(int n) {
    // 앞뒤 반전 3진법
    long long three = 0;
    while(n > 0){
        three = three*10 + (n%3);
        n /= 3;
    }
    
    // 다시 10진법으로
    long long answer=0, base=1;
    while(three){
        answer += ((three%10)*base);
        three /= 10;
        base *= 3;
    }
    
    return answer;
}
