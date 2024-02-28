#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<string, char> p1, pair<string, char> p2){
    if(p1.second == p2.second) return p1.first < p2.first;
    else return p1.second < p2.second;
}

vector<string> solution(vector<string> strings, int n) {
    vector<pair<string, char>> v;
    for(string str : strings)
        v.push_back(make_pair(str, str[n]));
    
    sort(v.begin(), v.end(), compare);
    
    vector<string> answer;
    for(int i=0; i<v.size(); i++)
        answer.push_back(v[i].first);
    
    return answer;
}
