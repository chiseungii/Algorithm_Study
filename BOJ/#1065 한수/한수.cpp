#include <iostream>
using namespace std;

bool isProg(int n) {
    if(n < 100) return true;

    int last = n%10;
    n /= 10;
    int sub = last-(n%10);

    while(n >= 10) {
        last = n%10;
        n /= 10;

        if(last-n%10 != sub) return false;
    }

    return true;
}

int main() {
    int N; cin>>N;

    int cnt = 0;
    for(int i=1; i<=N; i++)
        if(isProg(i)) cnt++;

    cout<<cnt;
}
