#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    vector<bool> painted(n, true);
    for(int s : section) painted[s-1] = false;
    
    int cnt = 0;
    for(int i=0; i<painted.size(); i++){
        if(!painted[i]){
            cnt++;
            for(int j=0; j<m && j+i<painted.size(); j++)
                painted[i+j] = true;
        }
    }
    
    return cnt;
}
