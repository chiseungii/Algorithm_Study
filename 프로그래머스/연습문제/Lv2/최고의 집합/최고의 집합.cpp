#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int n, int s) {
    // s가 n보다 작으면 자연수의 집합으로 만들 수가 없어서 -1 리턴
    if(s < n) return {-1};
    else{
        // s/n를 n개 깔기
        vector<int> answer(n, s/n);
        // s/n의 나머지 개수만큼 1 더하기
        for(int i=0; i<s%n; answer[i++]++);
        
        sort(answer.begin(), answer.end());
        return answer;
    }
}
