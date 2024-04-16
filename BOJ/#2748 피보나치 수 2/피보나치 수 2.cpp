#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;

    if(n == 0) cout<<0;
    else if(n == 1) cout<<1;
    else {
        long long a=0, b=1, c=1;
        for(int i=3; i<=n; i++) {
            a = b;
            b = c;
            c = a+b;
        }

        cout<<c;
    }
}
