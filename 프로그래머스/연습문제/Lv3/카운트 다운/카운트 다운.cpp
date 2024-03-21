#include <string>
#include <vector>

using namespace std;

vector<int> solution(int target) {
    // 불 1번 or 싱글 1번
    if(target==50 || target<=20) return {1, 1};
    // 트리플 1번
    else if(target<=60 && !(target%3)) return {1, 0};
    // 더블 1번
    else if(target<=40 && !(target%2)) return {1, 0};
    // 불 1번 + 싱글 1번
    else if(target>50 && target<=70) return {2, 2};
    // 이외의 70보다 작은 수들
    else if(target < 70){
        // 40 이하면 싱글+싱글
        if(target <= 40) return {2, 2};
        // 그 외는 싱글+더블 or 싱글+트리플
        else return {2, 1};
    }
    // 70보다 큰 수들은 DP
    else{
        vector<pair<int, int>> DP;  // <던지는 횟수, 싱글or불 개수>
        DP.push_back(make_pair(0, 0));
        
        for(int i=1; i<=target && i<=70; i++){
            if(i==50 || i<=20) DP.push_back(make_pair(1, 1));
            else if(i<=60 && !(i%3)) DP.push_back(make_pair(1, 0));
            else if(i<=40 && !(i%2)) DP.push_back(make_pair(1, 0));
            else if(i>50 && i<=70) DP.push_back(make_pair(2, 2));
            else{
                if(i <= 40) DP.push_back(make_pair(2, 2));
                else DP.push_back(make_pair(2, 1));
            }
        }
        
        for(int i=71; i<=target; i++){
                // 60 or 50을 한 번 더 쏘기
                int a = DP[i-60].first;
                int b = DP[i-50].first;
                
                // 횟수 같으면 불을 쏘기
                if(a == b) DP.push_back(make_pair(DP[i-50].first+1, DP[i-50].second+1));
                // 다르면 더 적게 쏘는 쪽으로
                else if(a < b) DP.push_back(make_pair(DP[i-60].first+1, DP[i-60].second));
                else DP.push_back(make_pair(DP[i-50].first+1, DP[i-50].second+1));
        }
        
        return {DP[target].first, DP[target].second};
    }
}
