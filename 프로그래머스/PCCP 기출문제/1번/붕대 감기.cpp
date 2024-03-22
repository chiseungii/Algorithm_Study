#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int hp = health;    // 현재 체력
    int t = 0;  // 현재 시각
    
    for(vector<int> attack : attacks){
        // 공격당하기 전에 힐
        while(hp < health){
            if(attack[0]-t-1 >= bandage[0]){
                hp += (bandage[0]*bandage[1]+bandage[2]);
                t += bandage[0];
            }
            else{
                hp += bandage[1]*(attack[0]-t-1);
                break;
            }
        }
        
        if(hp > health) hp = health;
        
        // 공격
        t = attack[0];
        hp -= attack[1];
        
        // 죽었는지 확인
        if(hp <= 0) return -1;
    }
    
    return hp;
}
