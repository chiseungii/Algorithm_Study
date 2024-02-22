#include <string>
#include <vector>
#include <stack>
using namespace std;

int isRight(string s){
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (st.empty() || s[i] == '(' || s[i] == '[' || s[i] == '{') {
            if (s[i] == '(') st.push(')');
            else if (s[i] == '[') st.push(']');
            else st.push('}');
        }
        else if (st.top() == s[i]) st.pop();
        else return 0;
    }

    return st.empty() ? 1 : 0;
}

int solution(string s) {
    int answer = 0;
    for(int i=0; i<s.length(); i++){
        // s[i]가 닫는 괄호면 건너뛰기
        if(s[i]==')' || s[i]==']' || s[i]=='}')
            continue;
        // 아니면 올바른 괄호 문자열인지 체크
        else answer += isRight(s.substr(i)+s.substr(0,i));
    }
    
    return answer;
}
