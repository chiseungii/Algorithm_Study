#include <iostream>
using namespace std;

int main() {
    int N; cin>>N;

    int fact=1, zero=0;
    for(int i=2; i<=N; i++) {
        fact *= i;

        // 0 개수 세서 지워주기
        while(1) {
            if(fact%10 != 0) break;
            zero++;
            fact /= 10;
        }

        // 일의 자리 수만 저장
        fact = fact%1000;
    }

    cout<<zero;
}
