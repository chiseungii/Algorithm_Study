#include<vector>
using namespace std;

long long solution(vector<vector<int> > land, int P, int Q) {
    // 가장 낮은 높이, 가장 높은 높이
    long long min_land=land[0][0], max_land=land[0][0];
    for(int i=0; i<land.size(); i++){
        for(int j=0; j<land.size(); j++){
            if((long long)land[i][j] > max_land) max_land = (long long)land[i][j];
            else if((long long)land[i][j] < min_land) min_land = (long long)land[i][j];
        }
    }
    
    // 이분탐색
    long long answer=100000000001;
    long long P_=P, Q_=Q;
    while(min_land <= max_land){
        long long mid = (min_land+max_land)/(long long)2;
        
        // mid, mid+1로 만들기 위해 제거 or 추가해야 하는 개수
        long long plus=0, minus=0, plus_2=0, minus_2=0;
        for(long long i=0; i<land.size(); i++){
            for(long long j=0; j<land.size(); j++){
                if(land[i][j] > mid) minus += (long long)(land[i][j]-mid);
                else if(land[i][j] < mid) plus += (long long)(mid-land[i][j]);
                
                if(land[i][j] > mid+1) minus_2 += (long long)(land[i][j]-mid-1);
                else if(land[i][j] < mid+1) plus_2 += (long long)(mid+1-land[i][j]);
            }
        }
        
        // mid 높이로 만들기 위해 필요한 비용
        long long cost = plus*P_ + minus*Q_;
        // mid+1 높이로 만들기 위해 필요한 비용
        long long cost_2 = plus_2*P_ + minus_2*Q_;
        
        // mid 보다 mid+1로 만드는 게 더 싼 경우
        if(cost_2 < cost){
            if(cost_2 < answer) answer = cost_2;
            min_land = mid+2;
        }
        // mid가 더 싼 경우
        else{
            if(cost < answer) answer = cost;
            max_land = mid-1;
        }
    }
    
    return answer;
}
