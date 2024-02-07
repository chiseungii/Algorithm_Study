#include <string>
#include <vector>
#include <set>
#include <cmath>
using namespace std;

int solution(int N, int number) {
    if(N == number) return 1;
    
    set<int> nums[9];
    nums[1].insert(N);
    
    int tmp = 0;
    for(int i=2; i<9; i++){
        // N을 i번 이어서 만들 수 있는 수
        tmp = 0;
        for(int j=0; j<i; tmp=(tmp*10)+N, j++);
        if(tmp == number) return i;
        else nums[i].insert(tmp);
        
        // i번 사용해서 만들 수 있는 수
        for(int j=1; j<=i/2; j++){
            set<int>::iterator it_1;
            for(it_1=nums[j].begin(); it_1!=nums[j].end(); it_1++){
                set<int>::iterator it_2;
                int k = i-j;
                
                for(it_2=nums[k].begin(); it_2!=nums[k].end(); it_2++){
                    nums[i].insert((*it_1)+(*it_2));
                    nums[i].insert((*it_1)*(*it_2));
                    if(*it_1 != *it_2) nums[i].insert(abs((*it_1)-(*it_2)));
                    if(*it_1 >= *it_2) nums[i].insert((*it_1)/(*it_2));
                    else nums[i].insert((*it_2)/(*it_1));
                }
            }
        }
        
        // number 만들었으면 리턴
        set<int>::iterator it;
        for(it=nums[i].begin(); it!=nums[i].end(); it++)
            if(*it == number) return i;
    }
    
    return -1;
}
