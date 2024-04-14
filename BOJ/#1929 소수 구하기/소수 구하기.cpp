#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M,N; cin>>M>>N;

    // 에라토스테네스의 체
    vector<bool> isPrime(N+1, true);
    isPrime[1] = false;

    for(int i=4; i<=N; i+=2) isPrime[i] = false;
    for(int i=3; i<=N; i+=2) {
        if(isPrime[i])
            for(int j=i*2; j<=N; j+=i) isPrime[j] = false;
    }

    for(int i=M; i<=N; i++)
        if(isPrime[i]) printf("%d\n", i);
}
