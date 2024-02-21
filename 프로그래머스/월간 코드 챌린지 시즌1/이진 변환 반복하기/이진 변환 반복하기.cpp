#include <string>
#include <vector>

using namespace std;

string toBin(int n){
    string str = "";
    while(n > 0){
        if(n % 2) str = "1"+str;
        else str = "0"+str;
        n /= 2;
    }
    
    return str;
}

vector<int> solution(string s) {
    int cnt=0, cnt_zero=0;
    while(s != "1"){
        // 0제거
        int len = s.length();
        for(int i=0; i<s.length(); i++){
            if(s[i] == '0'){
                cnt_zero++;
                len--;
            }
        }
        
        s = toBin(len);
        cnt++;
    }
    
    return {cnt, cnt_zero};
}
