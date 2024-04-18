#include <iostream>
using namespace std;

int main() {
    int E,S,M; cin>>E>>S>>M;
    if(S == 28) S = 0;
    if(M == 19) M = 0;

    for(int i=E; ; i+=15) {
        if(i%28==S && i%19==M) {
            cout<<i;
            break;
        }
    }
}
