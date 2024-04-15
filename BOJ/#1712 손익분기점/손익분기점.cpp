#include <iostream>
using namespace std;

int main() {
    int A,B,C; cin>>A>>B>>C;

    // 수익이 안 나는 구조
    if(C <= B) cout<<-1;
    else {
        // 하나 파는데 얻는 이익
        int income = C-B;
        cout<<A/income+1;
    }
}
