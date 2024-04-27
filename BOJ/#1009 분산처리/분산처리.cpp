#include <iostream>
using namespace std;

int main() {
    int T; cin>>T;
    for(int tc=0; tc<T; tc++) {
        int a,b; cin>>a>>b;

        int tmp = 1;
        for(int i=0; i<b; i++) {
            tmp *= a;
            tmp %= 10;
        }

        if(tmp == 0) cout<<10<<endl;
        else cout<<tmp<<endl;
    }
}
