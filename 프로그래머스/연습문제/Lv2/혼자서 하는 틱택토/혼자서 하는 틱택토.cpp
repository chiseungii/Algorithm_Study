#include <string>
#include <vector>

using namespace std;

int solution(vector<string> board) {
    // O와 X의 개수 비교
    int cntO=0, cntX=0;
    for(int i=0; i<board.size(); i++){
        for(int j=0; j<board[i].length(); j++){
            if(board[i][j] == 'O') cntO++;
            else if(board[i][j] == 'X') cntX++;
        }
    }
    
    if(cntO!=cntX && cntO!=cntX+1) return 0;
    
    // 게임이 끝났는지 확인
    bool winO=false, winX=false;
    for(int i=0; i<3; i++){
        // 가로
        if(board[i][0]==board[i][1] && board[i][0]==board[i][2]){
            if(board[i][0] == 'O') winO = true;
            else if(board[i][0] == 'X') winX = true;
        }
        // 세로
        if(board[0][i]==board[1][i] && board[0][i]==board[2][i]){
            if(board[0][i] == 'O') winO = true;
            else if(board[0][i] == 'X') winX = true;
        }
    }
    
    // 대각선
    if(board[0][0]==board[1][1] && board[0][0]==board[2][2]){
        if(board[0][0] == 'O') winO = true;
        else if(board[0][0] == 'X') winX = true;
    }
    if(board[0][2]==board[1][1] && board[2][0]==board[0][2]){
        if(board[0][2] == 'X') winX = true;
        else if(board[0][2] == 'O') winO = true;
    }
    
    // 둘 다 승리하면 안 됨
    if(winX && winO) return 0;
    // O가 승리했는데 X가 더 놓았으면 안 됨
    if(winO && cntO==cntX) return 0;
    // X가 승리했는데 O가 더 놓았으면 안 됨
    if(winX && cntO==cntX+1) return 0;
    
    return 1;
}
