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
    int T; cin>>T;
    for(int tc=0; tc<T; tc++) {
        int A,B; cin>>A>>B;
        cout<<A*B/gcd(A, B)<<endl;
    }
}
