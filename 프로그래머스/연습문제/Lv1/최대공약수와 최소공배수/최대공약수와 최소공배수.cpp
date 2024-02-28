#include <string>
#include <vector>

using namespace std;

int gcd(int n, int m){
    int l;
    
    while(m != 0){
        l = n%m;
        n = m;
        m = l;
    }
    
    return n;
}

vector<int> solution(int n, int m) {
    int g;
    
    if(n>m) g=gcd(m, n);
    else g=gcd(n, m);
    
    return {g, n*m/g};
}
