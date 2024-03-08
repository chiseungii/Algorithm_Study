#include <string>
#include <vector>
#include <set>
using namespace std;

int solution(int x, int y, int n) {
    // 연산 필요 없을 때
    if(x == y) return 0;
    
    set<int> saved_num;
    saved_num.insert(x);
    
    int cnt = 0;
    while(++cnt){
        // 저장된 수들에 3가지 연산을 하기
        set<int> maked_num;
        set<int>::iterator it;
        for(it=saved_num.begin(); it!=saved_num.end(); it++){
            int a = *it+n;
            int b = *it*2;
            int c = *it*3;
            
            if(a==y || b==y || c==y) return cnt;
            else{
                if(a < y) maked_num.insert(a);
                if(b < y) maked_num.insert(b);
                if(c < y) maked_num.insert(c);
            }
        }
        
        saved_num = maked_num;
        if(saved_num.empty()) break;
    }
    
    return -1;
}
