#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    for(long long ll=left; ll<=right; ll++){
        // 배열 좌표 계산
        long long i = ll/n;
        long long j = ll%n;
        
        // 좌표값 중 더 큰 값+1이 해당 좌표 숫자
        answer.push_back(max(i,j)+1);
    }
    
    return answer;
}
