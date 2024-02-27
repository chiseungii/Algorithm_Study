#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long a = (long long)sqrt(n);
    if(a*a == n) return (a+1)*(a+1);
    else return -1;
}
