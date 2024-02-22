#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int left, int right) {
    int answer = 0;
    for(int i=left; i<=right; i++){
        // 제곱수면 빼기
        int sq = sqrt(i);
        if(sq*sq == i) answer -= i;
        else answer += i;
    }
    
    return answer;
}
