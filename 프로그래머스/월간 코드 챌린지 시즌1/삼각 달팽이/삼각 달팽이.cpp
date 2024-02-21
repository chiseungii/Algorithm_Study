#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<vector<int>> snail;
    for(int i=0; i<n; i++){
        vector<int> v(n, 0);
        snail.push_back(v);
    }
    
    // 아래, 오른쪽, 대각선 왼쪽 위 순서로 채우기
    int cnt=n, dir=0, i=-1, j=0, num=1;
    while(cnt){
        // 아래쪽
        if(dir == 0){
            for(int k=0; k<cnt; k++)
                snail[++i][j] = num++;
        }
        // 오른쪽
        else if(dir == 1){
            for(int k=0; k<cnt; k++)
                snail[i][++j] = num++;
        }
        // 대각선 왼쪽 위
        else{
            for(int k=0; k<cnt; k++)
                snail[--i][--j] = num++;
        }
        
        cnt--; dir++;
        dir %= 3;
    }
    
    vector<int> answer; // 순서대로 합친 배열
    for(int i=0; i<n; i++)
        for(int j=0; j<=i; j++)
            answer.push_back(snail[i][j]);
    
    return answer;
}
