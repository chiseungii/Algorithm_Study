#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N; cin>>N;
    vector<int> students(N);
    for(int i=0; i<N; cin>>students[i++]);
    int B,C; cin>>B>>C;

    long long cnt = N;
    for(int i=0; i<N; i++) {
        // 총감독관 1명씩 배치
        students[i] -= B;
        if(students[i] < 0) students[i] = 0;

        // 부감독관 배치
        cnt += students[i]/C;
        if(students[i]%C) cnt++;
    }

    cout<<cnt;
}
