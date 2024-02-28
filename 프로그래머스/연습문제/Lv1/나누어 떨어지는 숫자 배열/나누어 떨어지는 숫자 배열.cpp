#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for(int a : arr)
        if(!(a%divisor)) answer.push_back(a);
    
    if(answer.empty()) return {-1};
    else{
        sort(answer.begin(), answer.end());
        return answer;
    }
}
