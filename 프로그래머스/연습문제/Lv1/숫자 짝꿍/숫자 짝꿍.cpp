#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string X, string Y) {
    vector<int> cnts(10, 0);
    for(int i=0; i<X.length(); i++)
        cnts[X[i]-'0']++;
    
    string answer = "";
    for(int i=0; i<Y.length(); i++){
        if(cnts[Y[i]-'0']){
            answer += Y[i];
            cnts[Y[i]-'0']--;
        }
    }
    
    sort(answer.begin(), answer.end(), greater<char>());
    
    if(answer == "") return "-1";
    else if(answer[0] == '0') return "0";
    else return answer;
}
