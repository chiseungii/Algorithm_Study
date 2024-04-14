#include <iostream>
#include <vector>
using namespace std;

#define SIZE 1001

int main() {
    // 에라토스테네스의 체
    vector<bool> isPrime(SIZE, true);
    isPrime[1] = false;

    for(int i=4; i<SIZE; i+=2) isPrime[i] = false;
    for(int i=3; i<SIZE; i+=2) {
        if(isPrime[i])
            for(int j=i*2; j<SIZE; j+=i)
                isPrime[j] = false;
    }

    int N; cin>>N;

    int cnt = 0;
    for(int i=0; i<N; i++) {
        int a; cin>>a;
        if(isPrime[a]) cnt++;
    }

    cout<<cnt;
}
