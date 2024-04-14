#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N; cin>>N;

    if(N == 3) cout<<1;
    else if(N == 4) cout<<-1;
    else {
        vector<int> DP(N+1, 0);
        DP[1] = DP[2] = DP[4] = -1;
        DP[3] = 1;

        for(int i=5; i<=N; i++) {
            // 3킬로 이용
            int three = DP[i-3];
            if(three != -1) three++;

            // 5킬로 이용
            int five = DP[i-5];
            if(five != -1) five++;

            if(three==-1 && five==-1) DP[i] = -1;
            else if(three==-1 && five!=-1) DP[i] = five;
            else if(three!=-1 && five==-1) DP[i] = three;
            else if(three < five) DP[i] = three;
            else DP[i] = five;
        }

        cout<<DP[N];
    }
}
