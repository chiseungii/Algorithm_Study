#include <iostream>
#include <vector>
using namespace std;

#define INF 600000

int solution(int N, vector<vector<int> > road, int K) {
    vector<vector<int>> graph;
    for (int i = 0; i <= N; i++) {
        vector<int> v(N + 1, 0);
        graph.push_back(v);
    }

    // update graph
    for (vector<int> r : road){
        if(!graph[r[0]][r[1]]) graph[r[0]][r[1]]=graph[r[1]][r[0]]=r[2];
        else if(r[2] < graph[r[0]][r[1]]) graph[r[0]][r[1]]=graph[r[1]][r[0]]=r[2];
    }

    // 다익스트라 길 찾기
    vector<int> weights(N + 1, INF);
    vector<bool> visit(N + 1, false);
    weights[1] = 0; visit[1] = true;
    int cnt = 1, now = 1;

    while (cnt < N) {
        // update weight
        for (int i = 2; i <= N; i++) {
            if (visit[i]) continue;
            if (graph[now][i] && weights[now] + graph[now][i] < weights[i])
                weights[i] = weights[now] + graph[now][i];
        }

        // 가장 단거리 구하기
        int min_weight = INF, min_vill = -1;
        for (int i = 2; i <= N; i++) {
            if (!visit[i] && weights[i] < min_weight) {
                min_weight = weights[i];
                min_vill = i;
            }
        }

        if (min_vill == -1) break;

        visit[min_vill] = true;
        now = min_vill;
        cnt++;
    }

    // K 이하로 갈 수 있는 곳의 개수
    int answer = 0;
    for (int i = 1; i <= N; i++)
        if (weights[i] <= K) answer++;

    return answer;
}
