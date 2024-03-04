#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int idx=0, i, min, max;
    for(i=0; s[i]!=' '; i++);
    min = max = stoi(s.substr(0, i));
    idx = i+1;
    
    for(i=idx; i<s.length(); i++){
        if(s[i] == ' '){
            int a = stoi(s.substr(idx, i-idx));
            if(a < min) min = a;
            else if(a > max) max = a;
            idx = i+1;
        }
    }
    
    int a = stoi(s.substr(idx));
    if(a < min) min = a;
    else if(a > max) max = a;
    
    return to_string(min)+" "+to_string(max);
}
