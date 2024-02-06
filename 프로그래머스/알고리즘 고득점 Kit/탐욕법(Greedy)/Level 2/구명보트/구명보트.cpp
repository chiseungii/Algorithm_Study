#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> people, int limit) {
    // 사람 몸무게를 내림차순으로 정렬
    sort(people.begin(), people.end(), greater<int>());
    
    // 투포인터 이용
    // 가장 무거운 사람 + 가장 가벼운 사람 조합
    int cnt=0, left=0, right=people.size()-1;
    while(left < right){
        // 둘 다 태우기
        if(people[left]+people[right] <= limit){
            left++; right--;
            cnt++;
        }
        // 아니면 무거운 사람부터 태우기
        else{
            left++; cnt++;
        }
    }
    
    // 마지막 사람 남았으면 태우기
    if(left == right) cnt++;
    
    return cnt;
}
