#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    map<string, int> m; // <품목, 원하는 개수>
    for(int i=0; i<want.size(); i++)
        m[want[i]] = number[i];
    
    int cnt = 0;
    for(int i=0; i<=discount.size()-10; i++){
        map<string, int> cmp;
        for(int j=0; j<10; j++)
            cmp[discount[i+j]]++;
        
        if(m == cmp) cnt++;
    }
    
    return cnt;
}
