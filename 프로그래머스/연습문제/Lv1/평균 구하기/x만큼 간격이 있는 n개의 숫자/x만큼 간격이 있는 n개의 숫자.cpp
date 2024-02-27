#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    for(int i=1; i<=n; answer.push_back(x*i++));
    
    return answer;
}
