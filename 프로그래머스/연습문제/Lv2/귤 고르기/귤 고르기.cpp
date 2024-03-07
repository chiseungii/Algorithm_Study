#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int k, vector<int> tangerine) {
    // 귤 크기대로 정렬
    sort(tangerine.begin(), tangerine.end());
    
    vector<int> cnts;
    for(int i=0; i<tangerine.size(); i++){
        int j;
        for(j=i+1; j<tangerine.size() && tangerine[i]==tangerine[j]; j++);
        cnts.push_back(j-i);
        i = j - 1;
    }
    
    // 개수 많은 순으로 정렬
    sort(cnts.begin(), cnts.end(), greater<int>());
    
    int cnt = 0;
    for(int c : cnts){
        if(k <= 0) break;
        cnt++;
        k -= c;
    }
    
    return cnt;
}
