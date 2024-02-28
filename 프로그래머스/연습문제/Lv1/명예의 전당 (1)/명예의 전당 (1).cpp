#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> answer;
    
    for(int sc : score){
        if(pq.size() < k) pq.push(sc);
        else if(sc > pq.top()){
            pq.pop();
            pq.push(sc);
        }
        
        answer.push_back(pq.top());
    }
    
    return answer;
}
