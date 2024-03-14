#include <string>
#include <vector>
#include <queue>
using namespace std;

int BFS(vector<string> board, pair<int,int> start){
    vector<vector<int>> visit;
    for(int i=0; i<board.size(); i++){
        vector<int> v(board[0].length(), -1);
        visit.push_back(v);
    }
    
    queue<pair<int,int>> q;
    q.push(start);
    visit[start.first][start.second] = 0;
    
    while(q.size()){
        pair<int,int> tmp = q.front();
        q.pop();
        
        if(board[tmp.first][tmp.second] == 'G')
            return visit[tmp.first][tmp.second];
        
        // 상
        int move_i = tmp.first;
        for(; move_i>=0 && board[move_i][tmp.second]!='D'; move_i--);
        move_i++;
        
        if(visit[move_i][tmp.second] == -1){
            q.push(make_pair(move_i, tmp.second));
            visit[move_i][tmp.second] = visit[tmp.first][tmp.second]+1;
        }
        
        // 하
        move_i = tmp.first;
        for(; move_i<board.size() && board[move_i][tmp.second]!='D'; move_i++);
        move_i--;
        
        if(visit[move_i][tmp.second] == -1){
            q.push(make_pair(move_i, tmp.second));
            visit[move_i][tmp.second] = visit[tmp.first][tmp.second]+1;
        }
        
        // 좌
        int move_j = tmp.second;
        for(; move_j>=0 && board[tmp.first][move_j]!='D'; move_j--);
        move_j++;
        
        if(visit[tmp.first][move_j] == -1){
            q.push(make_pair(tmp.first, move_j));
            visit[tmp.first][move_j] = visit[tmp.first][tmp.second]+1;
        }
        
        // 와
        move_j = tmp.second;
        for(; move_j<board[0].length() && board[tmp.first][move_j]!='D'; move_j++);
        move_j--;
        
        if(visit[tmp.first][move_j] == -1){
            q.push(make_pair(tmp.first, move_j));
            visit[tmp.first][move_j] = visit[tmp.first][tmp.second]+1;
        }
    }
    
    return -1;
}

int solution(vector<string> board) {
    pair<int,int> start;
    for(int i=0; i<board.size(); i++){
        for(int j=0; j<board[0].length(); j++){
            if(board[i][j] == 'R'){
                start.first = i;
                start.second = j;
                break;
            }
        }
    }
    
    return BFS(board, start);
}
