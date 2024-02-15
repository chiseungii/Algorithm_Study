#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int distance, vector<int> rocks, int n) {
    // 바위 위치 오름차순 정렬
    sort(rocks.begin(), rocks.end());
    
    vector<int> dists;  // 바위 사이 거리들
    dists.push_back(rocks[0]);
    for(int i=1; i<rocks.size(); i++)
        dists.push_back(rocks[i]-rocks[i-1]);
    dists.push_back(distance-rocks[rocks.size()-1]);
    
    // 이분탐색: 바위 사이 거리 최솟값을 대상으로
    int right=distance, left=0;
    int answer = -1;
    while(left <= right){
        int mid = (left+right)/2;
        
        // mid를 최소가 되게 하려면 바위 몇 개를 제거해야 하는가
        int cnt=0, tmp_dist=0;
        for(int dist : dists){
            // 거리가 mid보다 작으면 제거
            tmp_dist += dist;
            if(tmp_dist < mid) cnt++;
            else tmp_dist = 0;
        }
        
        // n개 이하로 제거할 수 있으면 거리 올리기
        if(cnt <= n){
            answer = mid;
            left = mid+1;
        }
        else right = mid-1;
    }
    
    return answer;
}
