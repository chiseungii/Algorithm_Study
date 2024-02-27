#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int sum=0, n_x=x;
    while(n_x){
        sum += (n_x%10);
        n_x /= 10;
    }
    
    return x%sum == 0;
}
