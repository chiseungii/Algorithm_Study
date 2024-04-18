#include <iostream>
using namespace std;

int main() {
    long long S; cin>>S;

    int cnt = 0;
    for(int i=1; i<=S; i++) {
        cnt++;
        S -= i;
    }

    cout<<cnt;
}
