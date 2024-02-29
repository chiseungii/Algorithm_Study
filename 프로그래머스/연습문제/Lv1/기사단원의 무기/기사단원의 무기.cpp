#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int number, int limit, int power) {
    vector<int> div(number+1, 2);
    div[1] = 1;
    
    for(int i=2; i<=number; i++)
        for(int j=i*2; j<=number; j+=i)
            div[j]++;
    
    int answer = 0;
    for(int i=1; i<=number; i++){
        if(div[i] > limit) answer += power;
        else answer += div[i];
    }
    
    return answer;
}
