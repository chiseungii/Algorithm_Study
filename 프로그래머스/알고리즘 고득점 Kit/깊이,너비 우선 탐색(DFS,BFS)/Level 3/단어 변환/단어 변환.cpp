#include <string>
#include <vector>
#include <map>
#include <queue>
using namespace std;

bool possible(string s1, string s2){
    int cnt = 0;
    for(int i=0; i<s1.length(); i++)
        if(s1[i] != s2[i]) cnt++;
    
    return cnt==1 ? true : false;
}

int solution(string begin, string target, vector<string> words) {
    map<string, int> visit;    // map[str]: str 되기 위해 몇 단계 거쳤는지
    for(string word : words) visit[word] = -1;
    visit[begin] = 0;
    
    queue<string> q;
    q.push(begin);
    
    while(q.size()){
        string tmp = q.front();
        q.pop();
        
        for(string word : words){
            if(visit[word]==-1 && possible(tmp, word)){
                visit[word] = visit[tmp]+1;
                q.push(word);
            }
        }
    }
    
    return visit[target]!=-1 ? visit[target] : 0;
}
