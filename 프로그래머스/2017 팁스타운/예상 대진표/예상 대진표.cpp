#include <iostream>

using namespace std;

int solution(int n, int a, int b){
    int cnt = 0;
    a--; b--;
    
    while(1){
        a/=2; b/=2;
        cnt++;
        
        if(a == b) return cnt;
    }
}
