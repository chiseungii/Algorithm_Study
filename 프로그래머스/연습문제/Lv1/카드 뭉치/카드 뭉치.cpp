#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int idx1=0, idx2=0, idx_goal=0;
    cards1.push_back(" ");
    cards2.push_back(" ");
    
    while(idx_goal<goal.size()){
        if(cards1[idx1]!=goal[idx_goal] && cards2[idx2]!=goal[idx_goal])
            return "No";
        else if(cards1[idx1] == goal[idx_goal]) idx1++;
        else idx2++;
        
        idx_goal++;
    }
    
    return "Yes";
}
