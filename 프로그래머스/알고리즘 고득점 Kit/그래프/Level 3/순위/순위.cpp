#include <string>
#include <vector>
#include <set>
using namespace std;

int solution(int n, vector<vector<int>> results) {
    set<int> win[n+1];
    set<int> lose[n+1];
    set<int>::iterator it, it_2;
    
    // 이긴 사람 진 사람 기록
    for(vector<int> result : results){
        int w=result[0], l=result[1];
        
        win[w].insert(l);
        for(it=win[l].begin(); it!=win[l].end(); it++){ // it: loser가 이긴 사람
            // loser가 이긴 사람들을 winner에게 기록
            win[w].insert(*it);
            // loser가 이긴 사람에게 winner와 winner가 진 사람들을 기록
            lose[*it].insert(w);
            for(it_2=lose[w].begin(); it_2!=lose[w].end(); it_2++)
                lose[*it].insert(*it_2);
        }
        
        lose[l].insert(w);
        for(it=lose[w].begin(); it!=lose[w].end(); it++){   // it: winner가 진 사람
            // winner가 진 사람들을 loser에게 기록
            lose[l].insert(*it);
            // winner가 진 사람에게 loser와 loser가 이긴 사람들을 기록
            win[*it].insert(l);
            for(it_2=win[l].begin(); it_2!=win[l].end(); it_2++)
                win[*it].insert(*it_2);
        }
    }
    
    // 이긴 사람 + 진 사람 수가 n-1 이면 카운팅
    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(win[i].size()+lose[i].size() == n-1)
            cnt++;
    }
    
    return cnt;
}
