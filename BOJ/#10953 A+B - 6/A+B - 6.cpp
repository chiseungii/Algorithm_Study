#include <iostream>
using namespace std;

int main() {
    int T; cin>>T;
    for(int tc=0; tc<T; tc++) {
        string s; cin>>s;
        cout<<(s[0]-'0')+(s[2]-'0')<<endl;
    }
}
