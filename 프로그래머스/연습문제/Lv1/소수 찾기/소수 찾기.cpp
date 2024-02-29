#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    vector<bool> primes(n+1, true);
    primes[0] = primes[1] = false;
    
    for(int i=2; i<=n; i++){
        if(!primes[i]) continue;
        for(int j=i*2; j<=n; j+=i)
            primes[j] = false;
    }
    
    int cnt = 0;
    for(int i=2; i<=n; cnt+=primes[i++]);
    
    return cnt;
}
