#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(vector<string> v1, vector<string> v2) {
    if (v1[0] == v2[0]) return v1[1] < v2[1];
    else return v1[0] < v2[0];
}

vector<string> DFS(vector<vector<string>> tickets, vector<string> path, string now, vector<bool> visit) {
    if (path.size() == tickets.size() + 1) return path;

    bool flag = false;
    for (int i = 0; i < tickets.size(); i++) {
        if (tickets[i][0]==now && !visit[i]) {
            flag = true;
            vector<string> tmp_path = path;
            tmp_path.push_back(tickets[i][1]);
            visit[i] = true;
            vector<string> v = DFS(tickets, tmp_path, tickets[i][1], visit);

            if (v.size() == tickets.size() + 1) return v;
            else visit[i] = false;
        }
    }

    if (!flag) return {};
    else return path;
}

vector<string> solution(vector<vector<string>> tickets) {
    // 알파벳 순으로 정렬
    sort(tickets.begin(), tickets.end(), compare);

    vector<bool> visit(tickets.size(), false);

    // ICN에서 출발하는 항공편마다 DFS 돌리기
    vector<string> answer;
    for (int i = 0; i < tickets.size(); i++) {
        if (tickets[i][0] == "ICN") {
            visit[i] = true;
            answer = DFS(tickets, {"ICN", tickets[i][1]}, tickets[i][1], visit);

            if (answer.size() == tickets.size() + 1) return answer;
            else visit[i] = false;
        }
    }

    return answer;
}
