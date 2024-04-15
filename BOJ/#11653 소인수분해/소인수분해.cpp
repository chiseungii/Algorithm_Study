#include <iostream>
#include <vector>
using namespace std;

#define SIZE 10000001

int main() {
    // 에라토스테네스의 체
    vector<bool> isPrime(SIZE, true);
    isPrime[1] = false;

    for(int i=3; i<SIZE; i++) {
        if(!(i%2)) isPrime[i] = false;
        else if(isPrime[i])
            for(int j=i*2; j<SIZE; j+=i) isPrime[j] = false;
    }

    // 소수만 모으기
    vector<int> primes = {2};
    for(int i=3; i<SIZE; i+=2)
        if(isPrime[i]) primes.push_back(i);

    int N; cin>>N;
    // 소수면 바로 출력
    if(isPrime[N]) cout<<N;
    else {
        // 소인수분해
        while(N > 1) {
            for(int i=0; i<primes.size(); i++) {
                if(!(N%primes[i])) {
                    printf("%d\n", primes[i]);
                    N /= primes[i];
                    break;
                }
            }
        }
    }
}
