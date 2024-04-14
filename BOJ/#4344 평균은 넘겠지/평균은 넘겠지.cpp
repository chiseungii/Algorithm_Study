#include <iostream>
#include <vector>
using namespace std;

int main() {
    int C; cin>>C;
    for(int tc=0; tc<C; tc++) {
        int N; cin>>N;

        vector<int> scores;
        int sum = 0;
        for(int i=0; i<N; i++) {
            int n; cin>>n;
            scores.push_back(n);
            sum += n;
        }

        double avg = (double)sum/(double)N;
        int cnt = 0;
        for(int score : scores)
            if(score > avg) cnt++;

        printf("%.3f%\n", (double)cnt/(double)N*100.);
    }
}
