#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int T; cin>>T;
    for(int tc=0; tc<T; tc++) {
        int x1,y1,r1,x2,y2,r2;
        cin>>x1>>y1>>r1>>x2>>y2>>r2;

        // 두 중심의 거리 계산
        double dist = sqrt(pow(x1-x2, 2)+pow(y1-y2, 2));

        // dist가 두 반지름의 차보다 크고 합보다 작으면 두 점에서 만남
        if(dist>abs(r1-r2) && dist<r1+r2) printf("2\n");
        // dist가 두 반지름의 차 or 합과 같으면
        else if(dist==abs(r1-r2) || dist==r1+r2) {
            // 두 원의 중심이 같으면 무한대
            if(x1==x2 && y1==y2) printf("-1\n");
            // 아니면 접함
            else printf("1\n");
        }
        // 둘 다 아니면 만나지 않음
        else printf("0\n");
    }
}
