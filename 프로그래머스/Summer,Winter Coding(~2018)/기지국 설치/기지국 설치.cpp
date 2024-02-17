#include <iostream>
#include <vector>
using namespace std;

int solution(int n, vector<int> stations, int w){
    vector<int> non_connects;   // 연속으로 연결 안 된 아파트 개수
    int apt = 1;
    
    for(int s : stations){
        // 연결 왼쪽 끝부터 apt까지 개수 세기
        int tmp = s-w-apt;
        if(tmp > 0) non_connects.push_back(tmp);
        apt = s+w+1;
    }
    if(apt <= n) non_connects.push_back(n+1-apt);
    
    // 연결 안 된 아파트마다 필요한 기지국 개수 세기
    int cnt=0, wifi=w*2+1;
    for(int n : non_connects){
        cnt += n/wifi;
        if(n % wifi) cnt++;
    }
    
    return cnt;
}
