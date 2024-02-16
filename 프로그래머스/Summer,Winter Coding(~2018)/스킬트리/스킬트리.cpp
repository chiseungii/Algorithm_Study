#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(string skill, vector<string> skill_trees) {
    map<char, bool> m;  // <스킬 이름, 배워야 하는지 여부>
    for(int i=0; i<skill.length(); m[skill[i++]]=true);
    
    int cnt = skill_trees.size();
    for(string sk : skill_trees){
        int index = 0;
        for(int i=0; i<sk.length(); i++){
            // 안 배워도 되면 패스
            if(!m[sk[i]]) continue;
            // 배워야 하는데 순서가 아니면 종료
            else if(sk[i] != skill[index]){
                cnt--; break;
            }
            // 배워야 하고 순서가 맞으면 배우고 넘어가기
            else index++;
        }
    }
    
    return cnt;
}
