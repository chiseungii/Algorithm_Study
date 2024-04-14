#include <iostream>
using namespace std;

int main() {
    int N; cin>>N;

    if(N == 1) cout<<1;
    else {
        int rooms=1, base=6, cnt=1;
        while(1) {
            rooms += base;
            cnt++;

            if(N <= rooms) {
                cout<<cnt;
                break;
            }

            base += 6;
        }
    }
}
