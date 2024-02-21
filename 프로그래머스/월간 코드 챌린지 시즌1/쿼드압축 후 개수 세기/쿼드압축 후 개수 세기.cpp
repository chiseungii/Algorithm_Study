#include <string>
#include <vector>

using namespace std;

vector<vector<int>> v;

pair<int,int> merge(int start_i, int start_j, int N){
    bool flag = true;
    int a = v[start_i][start_j];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (v[start_i + i][start_j + j] != a) {
                flag = false;
                break;
            }
        }
        if (!flag) break;
    }
    
    // NxN 크기가 다 같은 숫자라면
    if(flag){
        if(a == 1) return {0, 1};
        else return {1, 0};
    }
    // 아니면 네 방향으로 쪼개기
    else{
        pair<int,int> answer = {0, 0};
        
        // 왼쪽 위 방향
        pair<int,int> tmp = merge(start_i, start_j, N/2);
        answer.first += tmp.first;
        answer.second += tmp.second;
        
        // 오른쪽 위 방향
        tmp = merge(start_i, start_j+N/2, N/2);
        answer.first += tmp.first;
        answer.second += tmp.second;
        
        // 왼쪽 아래 방향
        tmp = merge(start_i+N/2, start_j, N/2);
        answer.first += tmp.first;
        answer.second += tmp.second;
        
        // 오른쪽 아래 방향
        tmp = merge(start_i+N/2, start_j+N/2, N/2);
        answer.first += tmp.first;
        answer.second += tmp.second;
        
        return answer;
    }
}

vector<int> solution(vector<vector<int>> arr) {
    int N = arr.size(); // 정사각형 크기
    v = arr;
    pair<int,int> answer = {0, 0};  // <0의 개수, 1의 개수>
    
    pair<int,int> p = merge(0, 0, N);
    return {p.first, p.second};
}
