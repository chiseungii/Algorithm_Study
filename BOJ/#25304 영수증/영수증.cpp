#include <iostream>
using namespace std;

int main() {
    int X; cin>>X;  // 총 금액
    int N; cin>>N;  // 물건 개수

    for(int i=0; i<N; i++) {
        int a,b; cin>>a>>b; // 물건 가격, 개수
        X -= a*b;
    }

    if(X == 0) cout<<"Yes\n";
    else cout<<"No\n";
}
