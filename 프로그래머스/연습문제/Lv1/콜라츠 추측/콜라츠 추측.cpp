#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    if(num == 1) return 0;
    
    int answer = 0;
    long long n = num;
    for(int i=0; i<500; i++){
        answer++;
        if(!(n%2)) n /= 2;
        else n = n*3+1;
        
        if(n == 1) return answer;
    }
    
    return -1;
}
