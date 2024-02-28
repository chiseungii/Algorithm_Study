#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    map<string, int> m;
    for(int i=0; i<name.size(); i++)
        m[name[i]] = yearning[i];
    
    vector<int> answer;
    for(vector<string> p : photo){
        int sum = 0;
        for(string s : p)
            sum += m[s];
        
        answer.push_back(sum);
    }
    
    return answer;
}
