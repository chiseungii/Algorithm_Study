#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double sum = 0.0;
    for(int a : arr) sum += a;
    
    return sum/(double)arr.size();
}
