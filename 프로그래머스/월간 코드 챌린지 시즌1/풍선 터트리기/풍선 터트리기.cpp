#include <string>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int solution(vector<int> a) {
    // 최솟값과 인덱스 찾기
    int min_idx = 0, min_num = a[0];
    for (int i = 1; i < a.size(); i++) {
        if (a[i] < min_num) {
            min_num = a[i];
            min_idx = i;
        }
    }

    // 왼쪽 끝 or 오른쪽 끝이면 기록
    bool left = false, right = false;
    if (min_idx == 0) left = true;
    else if (min_idx == a.size() - 1) right = true;

    // 최솟값을 기준으로 왼쪽 오른쪽 개수 세기
    int cnt = 1;
    // 왼쪽
    if (!left) {
        stack<int> st;
        st.push(a[0]);
        
        for(int i=1; i<min_idx; i++)
            if(a[i] < st.top()) st.push(a[i]);
        
        cnt += st.size();
    }

    // 오른쪽
    if (!right) {
        stack<int> st;
        st.push(a[a.size()-1]);
        
        for(int i=a.size()-2; i>min_idx; i--)
            if(a[i] < st.top()) st.push(a[i]);
        
        cnt += st.size();
    }

    return cnt;
}
