#include <iostream>
using namespace std;

int main() {
    int N; cin>>N;

    int cnt = 0;
    int num = N;
    while(1) {
        cnt++;

        int tmp = num%10;
        tmp *= 10;
        tmp += (num/10+num%10)%10;

        if(tmp == N) break;
        else num = tmp;
    }

    cout<<cnt;
}
