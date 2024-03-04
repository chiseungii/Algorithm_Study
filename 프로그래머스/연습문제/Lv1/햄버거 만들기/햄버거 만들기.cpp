#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<int> ingredient) {
    stack<int> st;
    int cnt = 0;
    
    for(int i=0; i<ingredient.size(); i++){
        if(st.size() < 3) st.push(ingredient[i]);
        else if(ingredient[i] == 1){
            if(st.top() != 3) st.push(ingredient[i]);
            else{
                st.pop();
                if(st.top() != 2){
                    st.push(3);
                    st.push(ingredient[i]);
                }
                else{
                    st.pop();
                    if(st.top() != 1){
                        st.push(2); st.push(3);
                        st.push(ingredient[i]);
                    }
                    else{
                        st.pop();
                        cnt++;
                    }
                }
            }
        }
        else st.push(ingredient[i]);
    }
    
    return cnt;
}
