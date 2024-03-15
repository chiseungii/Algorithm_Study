#include <string>
#include <vector>

using namespace std;

vector<vector<bool>> visit;
vector<bool> vertical_visit;
int cnt;

bool isQueen(int n) {
    for (int i = 0; i < n; i++) {
        int q;
        for (int j = 0; j < n; j++) {
            if (visit[i][j]) {
                q = j;
                break;
            }
        }

        for (int j = i + 1; j < n; j++) {
            if (q - (j - i) >= 0 && visit[j][q - (j - i)]) return false;
            if (q + (j - i) < n && visit[j][q + (j - i)]) return false;
        }
    }

    return true;
}

void backtracking(int n, int idx) {
    if (idx == n - 1) {
        if (isQueen(n)) cnt++;
        return;
    }

    int j;
    for(int i=0; i<n; i++){
        if(visit[idx][i]){
            j = i;
            break;
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (!vertical_visit[i] && i!=j-1 && i!=j+1) {
            visit[idx + 1][i] = true;
            vertical_visit[i] = true;
            backtracking(n, idx + 1);
            visit[idx + 1][i] = false;
            vertical_visit[i] = false;
        }
    }

    return;
}

int solution(int n) {
    for (int i = 0; i < n; i++) {
        vector<bool> v(n, false);
        visit.push_back(v);
        vertical_visit.push_back(false);
    }

    cnt = 0;
    for (int i = 0; i < n; i++) {
        visit[0][i] = true;
        vertical_visit[i] = true;
        backtracking(n, 0);
        visit[0][i] = false;
        vertical_visit[i] = false;
    }

    return cnt;
}
