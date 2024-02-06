#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(vector<int> v1, vector<int> v2){
    return v1[1] < v2[1];
}

int solution(vector<vector<int>> routes) {
    // 나가는 지점 순으로 정렬
    sort(routes.begin(), routes.end(), compare);
    
    int cam=-300001, cnt=0;
    for(vector<int> route : routes){
        // 진입한 자동차를 찍을 카메라가 없으면
        // 나가는 곳에 카메라 설치
        if(cam < route[0]){
            cam = route[1];
            cnt++;
        }
    }
    
    return cnt;
}
