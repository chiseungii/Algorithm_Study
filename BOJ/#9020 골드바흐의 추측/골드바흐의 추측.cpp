#include <iostream>
#include <vector>
using namespace std;

#define SIZE 10000

int main() {
    // 에라토스테네스의 체
    vector<bool> isPrime(SIZE, true);
    isPrime[1] = false;

    for(int i=3; i<SIZE; i++) {
        if(!(i%2)) isPrime[i] = false;
        else if(isPrime[i])
            for(int j=i*2; j<SIZE; j+=i) isPrime[j] = false;
    }

    int T; cin>>T;
    for(int tc=0; tc<T; tc++) {
        int n; cin>>n;

        for(int i=n/2; i>=2; i--) {
            if(isPrime[i] && isPrime[n-i]) {
                printf("%d %d\n", i, n-i);
                break;
            }
        }
    }
}
