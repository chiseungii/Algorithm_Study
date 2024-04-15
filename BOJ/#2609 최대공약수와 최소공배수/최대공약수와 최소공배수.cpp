#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while(b) {
        int tmp = a;
        a = b;
        b = tmp%a;
    }

    return a;
}

int main() {
    int a,b; cin>>a>>b;

    cout<<gcd(a, b)<<endl;
    cout<<a*b/gcd(a, b)<<endl;
}
