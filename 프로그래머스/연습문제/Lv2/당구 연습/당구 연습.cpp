#include <string>
#include <vector>
#include <cmath>
using namespace std;

vector<int> solution(int m, int n, int startX, int startY, vector<vector<int>> balls) {
    vector<int> answer;
    for (vector<int> ball : balls) {
        double min_dist = 500000000.0;
        double dist, tmpX, tmpY;

        // 상하
        // x축 같으면 벽을 먼저 때릴 수 있는 방향으로만
        if (ball[1] == startY) {
            if (startX < ball[0]) {
                dist = startX + ball[0];
                if (dist * dist < min_dist) min_dist = dist * dist;
            }
            else {
                dist = (m - startX) + (m - ball[0]);
                if (dist * dist < min_dist) min_dist = dist * dist;
            }
        }
        // 아니면 대칭이동 후 거리 계산
        else {
            // 위쪽 벽
            tmpX = -(double)ball[0];
            dist = pow(abs((double)startY - (double)ball[1]), 2) + pow(abs((double)startX - tmpX), 2);
            if (dist < min_dist) min_dist = dist;

            // 아래쪽 벽
            tmpX = (double)m + ((double)m - (double)ball[0]);
            dist = pow(abs((double)startY - (double)ball[1]), 2) + pow(abs((double)startX - tmpX), 2);
            if (dist < min_dist) min_dist = dist;
        }

        // 좌우
        // y축 같으면 한 쪽만
        if (startX == ball[0]) {
            if (startY < ball[1]) {
                dist = startY + ball[1];
                if (dist * dist < min_dist) min_dist = dist * dist;
            }
            else {
                dist = (n - startY) + (n - ball[1]);
                if (dist * dist < min_dist) min_dist = dist * dist;
            }
        }
        else {
            // 왼쪽 벽
            tmpY = -(double)ball[1];
            dist = pow(abs((double)startY - tmpY), 2) + pow(abs((double)startX - (double)ball[0]), 2);
            if (dist < min_dist) min_dist = dist;

            // 오른쪽 벽
            tmpY = (double)n + ((double)n - (double)ball[1]);
            dist = pow(abs((double)startY - tmpY), 2) + pow(abs((double)startX - (double)ball[0]), 2);
            if (dist < min_dist) min_dist = dist;
        }

        answer.push_back((int)min_dist);
    }

    return answer;
}
