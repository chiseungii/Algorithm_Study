#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M,N; cin>>M>>N;

    // 에라토스테네스의 체
    vector<bool> isPrime(N+1, true);
    isPrime[1] = false;

    for(int i=3; i<=N; i++) {
        if(!(i%2)) isPrime[i] = false;
        else if(isPrime[i])
            for(int j=i*2; j<=N; j+=i) isPrime[j] = false;
    }

    int sum=0, minPrime;
    for(int i=N; i>=M; i--) {
        if(isPrime[i]) {
            sum += i;
            minPrime = i;
        }
    }

    if(!sum) cout<<-1;
    else cout<<sum<<endl<<minPrime;
}
