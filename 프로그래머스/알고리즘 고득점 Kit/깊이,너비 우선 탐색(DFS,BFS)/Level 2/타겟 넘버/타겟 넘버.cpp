#include <string>
#include <vector>

using namespace std;

int DFS(vector<int> numbers, int target, int index, int n){
    if(index >= numbers.size())
        return n==target ? 1 : 0;
    
    int cnt = 0;
    cnt += DFS(numbers, target, index+1, n+numbers[index]);
    cnt += DFS(numbers, target, index+1, n-numbers[index]);
    
    return cnt;
}

int solution(vector<int> numbers, int target) {
    return DFS(numbers, target, 0, 0);
}
