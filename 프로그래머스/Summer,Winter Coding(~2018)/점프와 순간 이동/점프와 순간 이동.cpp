#include <iostream>
#include <vector>
using namespace std;

int solution(int n){
    // 이진법으로 바꿨을 때 1의 개수
    int cnt = 0;
    while(n > 0){
        cnt += (n%2);
        n /= 2;
    }
    
    return cnt;
}
