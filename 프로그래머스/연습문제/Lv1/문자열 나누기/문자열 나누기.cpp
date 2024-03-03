#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int cnt=0, idx=0;
    char x;
    for(int i=0; i<s.length(); i++){
        x = s[i];
        cnt++;
        int xi=1, yi=0;
        for(idx=i+1; idx<s.length() && xi!=yi; idx++){
            if(s[idx] == x) xi++;
            else yi++;
        }
        
        i = idx-1;
    }
    
    return cnt;
}
