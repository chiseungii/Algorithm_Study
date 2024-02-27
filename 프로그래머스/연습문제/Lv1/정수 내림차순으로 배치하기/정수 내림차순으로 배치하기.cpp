#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    vector<int> v;
    while(n){
        v.push_back(n%10);
        n /= 10;
    }
    sort(v.begin(), v.end(), greater<int>());
    
    long long answer = 0;
    for(int vi : v) answer = answer*10+vi;
    
    return answer;
}
