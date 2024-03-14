#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(int k, int d) {
    long long cnt = 0;
    for(long long i=0; ; i+=k){
        if(i*i > (long long)d*(long long)d) break;
        
        long long j = sqrt((long long)d*(long long)d - i*i);
        cnt += (j/k+1);
    }
    
    return cnt;
}
