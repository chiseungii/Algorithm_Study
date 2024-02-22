#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> a) {
    // 각 숫자 개수 세기
    vector<int> cnts(a.size(), 0);
    for(int i=0; i<a.size(); i++)
        cnts[a[i]]++;
    
    int answer = 0;
    for(int i=0; i<a.size(); i++){
        // i 개수가 최댓값보다 작으면 건너뛰기
        if(cnts[i] <= answer) continue;
        
        // 스타 수열이 최대 길이 구하기
        int len = 0;
        for(int j=0; j<a.size()-1; j++){
            if((a[j]==i || a[j+1]==i) && a[j]!=a[j+1]){
                len++; j++;
            }
        }
        
        answer = max(len, answer);
    }
    
    return answer*2;
}
