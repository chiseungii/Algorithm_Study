#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;

vector<int> solution(vector<vector<int>> edges) {
    vector<int> answer(4, 0);
    map<int, int> in, out;  // <정점 번호, 나가는 or 들어오는 간선 개수>
    for (vector<int> edge : edges) {
        if (edge[0] == edge[1])
            answer[2]++;
     
        out[edge[0]]++;
        if (!in[edge[0]]) in[edge[0]] = 0;

        in[edge[1]]++;
        if (!out[edge[1]]) out[edge[1]] = 0;
    }

    // 들어오는 간선이 없고, 나가는 간선이 2개 이상: 생성된 정점
    map<int, int>::iterator it;
    int cnt_graph = 0;
    for (it = out.begin(); it != out.end(); it++) {
        if (it->second >= 2 && in[it->first] == 0) {
            answer[0] = it->first;
            cnt_graph = out[it->first];
            break;
        }
    }

    // 생성된 정점에서 나가는 간선 모두 삭제
    for (vector<int> edge : edges)
        if (edge[0] == answer[0])
            in[edge[1]]--;
    out.erase(answer[0]);
    in.erase(answer[0]);

    // 막대그래프와 8자 모양 그래프 개수 세기
    // 막대그래프: 들어오는 or 나가는 간선이 없는 정점의 개수
    // 8자 모양 그래프: 들어오고 나가는 간선이 모두 2개인 정점의 개수
    int line = 0, eight = 0;
    for (it = in.begin(); it != in.end(); it++) {
        if (it->second==0 || out[it->first] == 0) {
            if(it->second==0 && out[it->first]==0) line += 2;
            else line++;
        }
        else if (it->second == 2 && out[it->first] == 2) eight++;
    }

    answer[2] = line / 2;
    answer[3] = eight;
    answer[1] = cnt_graph - answer[2] - answer[3];

    return answer;
}
