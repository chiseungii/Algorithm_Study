#include <iostream>
using namespace std;

int main() {
    int T; scanf("%d", &T);
    int A,B;
    for(int tc=0; tc<T; tc++) {
        scanf("%d %d", &A, &B);
        printf("%d\n", A+B);
    }
}
