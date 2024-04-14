#include <iostream>
using namespace std;

int main() {
    int T; cin>>T;
    for(int tc=0; tc<T; tc++) {
        int A,B; cin>>A>>B;
        printf("Case #%d: %d + %d = %d\n", tc+1, A, B, A+B);
    }
}
