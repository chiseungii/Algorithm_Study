#include <iostream>
using namespace std;

long long A,B,C;

long long DQ(long long n, long long base) {
    if(base == 1) return n%C;

    long long a = DQ(n, base/2);
    a %= C;
    a = (a*a)%C;

    if(base%2) return (a*n)%C;
    else return a;
}

int main() {
    cin>>A>>B>>C;
    printf("%lld\n", DQ(A, B));
}
