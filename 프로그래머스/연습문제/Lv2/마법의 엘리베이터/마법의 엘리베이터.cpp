#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int storey) {
    int cnt = 0;
    while(storey > 5){
        int n = storey%10;
        
        if(n > 5){
            cnt += (10-n);
            storey += (10-n);
        }
        else if(n == 5){
            if((storey%100)/10 >= 5){
                cnt += (10-n);
                storey += (10-n);
            }
            else{
                cnt += n;
                storey -= n;
            }
        }
        else{
            cnt += n;
            storey -= n;
        }
        
        storey /= 10;
    }
    
    return cnt+storey;
}
