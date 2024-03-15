#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> cards) {
    vector<int> scores; // 점수들
    vector<bool> visit(cards.size(), false);
    
    for(int i=0;i <cards.size(); i++){
        if(!visit[i]){
            int score = 1;
            visit[i] = true;
            int idx = cards[i]-1;
            
            while(1){
                if(visit[idx]) break;
                
                score++;
                visit[idx] = true;
                idx = cards[idx]-1;
            }
            
            scores.push_back(score);
        }
    }
    
    sort(scores.begin(), scores.end(), greater<int>());
    
    if(scores.size() <= 1) return 0;
    else return scores[0]*scores[1];
}
