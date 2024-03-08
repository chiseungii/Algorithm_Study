#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<int> topping) {
    map<int, int> left, right;    // <맛 종류, 개수>
    for(int t : topping) right[t]++;
    
    int cnt_left=0, cnt_right=right.size();
    int cnt = 0;
    for(int i=0; i<topping.size()-1; i++){
        // i번째 맛 왼쪽으로 넘기기
        right[topping[i]]--;
        if(right[topping[i]] == 0){
            right.erase(topping[i]);
            cnt_right--;
        }
        
        if(left[topping[i]] == 0) cnt_left++;
        left[topping[i]]++;
        
        if(cnt_right == cnt_left) cnt++;
    }
    
    return cnt;
}
