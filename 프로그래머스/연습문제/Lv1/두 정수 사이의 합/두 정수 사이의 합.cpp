#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    // a가 더 크면 순서 바꾸기
    if(a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    
    long long answer = 0;
    for(long long i=a; i<=b; i++)
        answer += i;
    
    return answer;
}
