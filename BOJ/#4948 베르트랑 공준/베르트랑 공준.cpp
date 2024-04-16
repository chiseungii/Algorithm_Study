#include <iostream>
#include <vector>
using namespace std;

#define SIZE 246913

int main() {
    // 에라토스테네스의 체
    vector<bool> isPrime(SIZE, true);
    isPrime[1] = false;

    for(int i=3; i<SIZE; i++) {
        if(!(i%2)) isPrime[i] = false;
        else if(isPrime[i])
            for(int j=i*2; j<SIZE; j+=i) isPrime[j] = false;
    }

    while(1) {
        int n; cin>>n;
        if(n == 0) break;

        int cnt = 0;
        for(int i=n+1; i<=n*2; i++)
            if(isPrime[i]) cnt++;

        printf("%d\n", cnt);
    }
}
