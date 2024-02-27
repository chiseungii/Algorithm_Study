#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    
    int answer = n+1;
    for(int i=2; i<n; i++)
        if(!(n%i)) answer += i;
    
    return answer;
}
