#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int di[4] = {-1, 0, 1, 0};
    int dj[4] = {0, 1, 0, -1};
    
    int answer = 0;
    for(int i=0; i<4; i++){
        int tmp_h = h+di[i];
        int tmp_w = w+dj[i];
        
        if(tmp_h<0 || tmp_h>=board.size()) continue;
        if(tmp_w<0 || tmp_w>=board.size()) continue;
        
        if(board[tmp_h][tmp_w] == board[h][w]) answer++;
    }
    
    return answer;
}
