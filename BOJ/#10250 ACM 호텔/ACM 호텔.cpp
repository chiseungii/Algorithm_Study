#include <iostream>
using namespace std;

int main() {
    int T; cin>>T;
    for(int tc=0; tc<T; tc++) {
        int H,W,N; cin>>H>>W>>N;

        int roomNum = (N-1)/H+1;
        int floor = N%H;
        if(floor == 0) floor = H;

        printf("%d%02d\n", floor, roomNum);
    }
}
