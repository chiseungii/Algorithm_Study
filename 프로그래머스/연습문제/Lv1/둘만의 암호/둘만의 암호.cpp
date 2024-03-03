#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(string s, string skip, int index) {
    map<char, bool> in;
    for(int i=0; i<skip.length(); i++)
        in[skip[i]] = true;
    
    for(int i=0; i<s.length(); i++){
        for(int j=0; j<index; j++){
            s[i]++;
            if(s[i] > 'z') s[i] = 'a';
            
            while(in[s[i]]){
                s[i]++;
                if(s[i] > 'z') s[i] = 'a';
            }
        }
    }
    
    return s;
}
