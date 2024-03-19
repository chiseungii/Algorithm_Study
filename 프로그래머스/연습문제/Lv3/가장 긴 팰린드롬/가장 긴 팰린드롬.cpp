#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s) {
    stack<char> st;
    char second = ' ';
    int max_len = 1;

    for (int i = 0; i < s.length(); i++) {
        // 스택이 비었으면 바로 push
        if (st.empty()) st.push(s[i]);
        // 원소가 1개일 때는 제일 위에꺼만 비교
        else if (st.size() == 1) {
            if (st.top() == s[i]) {
                if (max_len < 2) max_len = 2;
                st.push(s[i]);
                second = s[i];
            }
            else {
                second = st.top();
                st.push(s[i]);
            }
        }
        // 원소가 2개 이상일 때는 두번째 원소까지 비교
        else {
            bool flag = false;
            if (second == s[i]) {
                flag = true;
                int len = 1;
                stack<char> tmp = st;
                tmp.pop();
                int idx = i;

                while (tmp.size() && idx < s.length()) {
                    if (tmp.top() == s[idx++]) {
                        len += 2;
                        tmp.pop();
                    }
                    else break;
                }

                if (len > max_len) max_len = len;
            }

            if (st.top() == s[i]) {
                flag = true;
                int len = 2;
                stack<char> tmp = st;
                tmp.pop();
                int idx = i + 1;

                while (tmp.size() && idx < s.length()) {
                    if (tmp.top() == s[idx++]) {
                        len += 2;
                        tmp.pop();
                    }
                    else break;
                }

                if (len > max_len) max_len = len;
            }

            second = st.top();
            st.push(s[i]);
        }
    }

    return max_len;
}
