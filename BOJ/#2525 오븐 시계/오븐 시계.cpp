#include <iostream>
using namespace std;

int main() {
    int A,B,C; cin>>A>>B>>C;

    B += C;
    if(B >= 60) {
        A += B/60;
        B %= 60;
        A %= 24;
    }

    printf("%d %d\n", A, B);
}
