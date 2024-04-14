#include <iostream>
#include <vector>
using namespace std;

int main() {
    int A,B,C; cin>>A>>B>>C;
    A *= B*C;

    vector<int> cnt(10, 0);
    while(A) {
        cnt[A%10]++;
        A /= 10;
    }

    for(int c : cnt) cout<<c<<endl;
}
