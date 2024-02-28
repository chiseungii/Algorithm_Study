#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' ') continue;
        else if(s[i] <= 'Z'){
            int a = s[i]-'A';
            a = (a+n)%26;
            s[i] = a+'A';
        }
        else{
            int a = s[i]-'a';
            a = (a+n)%26;
            s[i] = a+'a';
        }
    }
    
    return s;
}
