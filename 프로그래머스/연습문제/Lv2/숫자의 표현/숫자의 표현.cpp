#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int cnt = 1;
    for(int i=1; i<n; i++){
        int sum = i;
        for(int j=i+1; j<n && sum<n; sum+=j++);
        
        if(sum == n) cnt++;
    }
    
    return cnt;
}
