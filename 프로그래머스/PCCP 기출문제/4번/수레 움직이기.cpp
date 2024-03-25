#include <string>
#include <vector>

using namespace std;

int cnt = -1;
vector<vector<int>> copy_maze;
vector<vector<bool>> visit[2];

void backtracking(pair<int, int> red, pair<int, int> blue, int n) {
    // 둘 다 도착 칸에 도착했으면 끝
    if (copy_maze[red.first][red.second] == 3 && copy_maze[blue.first][blue.second] == 4) {
        if (cnt == -1 || n < cnt) cnt = n;
        return;
    }

    // 도착한 수레 있으면 체크
    bool red_in = false, blue_in = false;
    if (copy_maze[red.first][red.second] == 3) red_in = true;
    else if (copy_maze[blue.first][blue.second] == 4) blue_in = true;

    int di[4] = { -1, 0, 1, 0 };
    int dj[4] = { 0, 1, 0, -1 };

    // 2중 for문으로 16가지 경우 체크
    for (int i = 0; i < 4; i++) {
        // 빨간색 도착했으면 움직이지 않음
        int red_i = red.first, red_j = red.second;
        if (!red_in) {
            red_i += di[i];
            red_j += dj[i];
        }

        // 범위 벗어나면 불가능
        if (red_i < 0 || red_i >= copy_maze.size() || red_j < 0 || red_j >= copy_maze[0].size()) continue;
        // 벽이면 불가능
        else if (copy_maze[red_i][red_j] == 5) continue;
        // 도착하지 않았는데 중복 방문 불가능
        else if (!red_in && visit[0][red_i][red_j]) continue;

        visit[0][red_i][red_j] = true;

        for (int j = 0; j < 4; j++) {
            // 파란색 도착했으면 움직이지 않음
            int blue_i = blue.first, blue_j = blue.second;
            if (!blue_in) {
                blue_i += di[j];
                blue_j += dj[j];
            }

            // 범위 벗어나면 불가능
            if (blue_i < 0 || blue_i >= copy_maze.size() || blue_j < 0 || blue_j >= copy_maze[0].size()) continue;
            // 벽이면 불가능
            else if (copy_maze[blue_i][blue_j] == 5) continue;
            // 도착하지 않았는데 중복 방문 불가능
            else if (!blue_in && visit[1][blue_i][blue_j]) continue;
            // 둘이 같은 칸으로 이동 불가능
            else if (red_i == blue_i && red_j == blue_j) continue;
            // 둘이 자리 바꾸는 것 불가능
            else if (red.first == blue_i && red.second == blue_j && blue.first == red_i && blue.second == red_j) continue;
            // 움직이기 가능하면 재귀
            else {
                visit[1][blue_i][blue_j] = true;

                backtracking(pair<int,int>{ red_i, red_j }, pair<int,int>{ blue_i, blue_j }, n + 1);

                visit[1][blue_i][blue_j] = false;
            }
        }

        visit[0][red_i][red_j] = false;
    }

    return;
}

int solution(vector<vector<int>> maze) {
    int n = maze.size(), m = maze[0].size();    // 행, 열
    copy_maze = maze;

    // 차례로 빨간색 시작, 파란색 시작
    pair<int, int> red, blue;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (maze[i][j] == 1) {
                red.first = i;
                red.second = j;
            }
            else if (maze[i][j] == 2) {
                blue.first = i;
                blue.second = j;
            }
        }
    }

    // 백트래킹으로 찾기
    // visit[0][i]: 빨간색 방문, visit[1][i]: 파란색 방문
    for (int i = 0; i < n; i++) {
        vector<bool> v(m, false);
        visit[0].push_back(v);
        visit[1].push_back(v);
    }

    visit[0][red.first][red.second] = true;
    visit[1][blue.first][blue.second] = true;

    backtracking(red, blue, 0);

    return cnt == -1 ? 0 : cnt;
}
