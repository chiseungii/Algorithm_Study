#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

long long solution(int n, vector<int> works) {
    map<int, int, greater<int>> m;    // <작업량, 개수>
    int sum = 0;
    
    for(int work : works){
        m[work]++;
        sum += work;
    }
    
    // 야근 안 해도 되면 0 리턴
    if(sum <= n) return 0;
    else{
        // 최대한 작업량 많은 것부터 일하기
        map<int, int>::iterator it;
        while(n){
            it = m.begin();
            if(it->second <= n){
                n -= it->second;
                m[it->first-1] += it->second;
                m.erase(it);
            }
            else{
                m[it->first] -= n;
                m[it->first-1] += n;
                n = 0;
            }
        }
    }
    
    // 남은 작업량 계산
    long long answer = 0;
    map<int, int>::iterator it;
    for(it=m.begin(); it!=m.end(); it++)
        answer += (it->first)*(it->first)*(it->second);
    
    return answer;
}
