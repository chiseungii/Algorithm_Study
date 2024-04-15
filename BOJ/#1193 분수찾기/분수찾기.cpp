#include <iostream>
using namespace std;

int main() {
    int X; cin>>X;

    int cpyX=X, cnt=0;
    while(cpyX > 0) {
        cnt++;
        cpyX -= cnt;
    }
    cpyX += cnt;

    // cnt가 홀수면 오른쪽 위 대각선
    if(cnt%2) {
        int up = cnt-(cpyX-1);
        int down = cpyX;
        printf("%d/%d\n", up, down);
    }
    // cnt가 짝수면 왼쪽 아래 대각선
    else {
        int up = cpyX;
        int down = cnt-(cpyX-1);
        printf("%d/%d\n", up, down);
    }
}
