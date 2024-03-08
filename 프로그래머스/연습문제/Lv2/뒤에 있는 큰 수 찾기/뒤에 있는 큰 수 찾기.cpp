#include <string>
#include <vector>
#include <stack>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer(numbers.size(), -1);
    stack<int> st;
    st.push(numbers[numbers.size()-1]);
    
    for(int i=numbers.size()-2; i>=0; i--){
        while(st.size() && (st.top()<=numbers[i]))
            st.pop();
        
        if(st.size()) answer[i] = st.top();
        st.push(numbers[i]);
    }
    
    return answer;
}
