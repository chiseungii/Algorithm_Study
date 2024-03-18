#include <string>
#include <vector>

using namespace std;

int recursive(int n, long long l){
    if(n == 1){
        if(l < 2) return l+1;
        else return l;
    }
    
    long long five = 1; // 5^(n-1)
    for(int i=0; i<n-1; five*=5, i++);
    long long a = l/five;
    
    long long four = 1; // 4^(n-1)
    for(int i=0; i<n-1; four*=4, i++);
    
    long long b = l%five;
    
    if(a < 2) return four*a+recursive(n-1, b);
    else if(a == 2) return four*a;
    else return four*(a-1)+recursive(n-1, b);
}

int solution(int n, long long l, long long r) {
    return recursive(n, r-1) - recursive(n, l-2);
}
