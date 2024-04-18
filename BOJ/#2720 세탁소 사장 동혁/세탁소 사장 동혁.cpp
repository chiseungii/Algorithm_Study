#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> coins = {25, 10, 5, 1};

    int T; cin>>T;
    for(int tc=0; tc<T; tc++) {
        int C; cin>>C;
        for(int i=0; i<4; i++) {
            printf("%d ", C/coins[i]);
            C %= coins[i];
        }
        cout<<endl;
    }
}
