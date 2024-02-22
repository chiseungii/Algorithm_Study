#include <string>
#include <vector>
using namespace std;

vector<string> solution(vector<string> s) {
    vector<string> ans;
    for (string si : s) {
        vector<char> st;
        int cnt110 = 0;
        for (int i = 0; i < si.length(); i++) {
            // st 크기가 2 미만이면 push
            if (st.size() < 2) st.push_back(si[i]);
            // 1은 push
            else if (si[i] == '1') st.push_back('1');
            else {
                // st에 연달아 11이 있으면 빼고 카운팅
                if (st[st.size() - 1] == '1' && st[st.size() - 2] == '1') {
                    st.pop_back(); st.pop_back();
                    cnt110++;
                }
                else st.push_back('0');
            }
        }

        // 1이 두 번 연달아 나타나는 곳 앞에 110 붙이기
        string answer = "";
        int idx = 0;
        for (; idx < st.size(); idx++) {
            if (st[idx] == '0') answer += "0";
            else {
                if (idx == st.size() - 1 || st[idx + 1] == '1') {
                    for (int j = 0; j < cnt110; j++)
                        answer += "110";
                    for (int j = idx; j < st.size(); j++)
                        answer += st[j];

                    cnt110 = 0;
                    break;
                }
                else answer += "1";
            }
        }

        if (cnt110)
            for (int i = 0; i < cnt110; i++)
                answer += "110";

        ans.push_back(answer);
    }

    return ans;
}
