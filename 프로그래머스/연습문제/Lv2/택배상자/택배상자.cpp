#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<int> order) {
    // 상자 번호 매기기
    vector<int> boxes(order.size(), 0);
    
    for(int i=0; i<order.size(); i++)
        boxes[order[i]-1] = i+1;
    
    // 보조 컨테이터
    stack<int> sub;
    int num=1, idx=0;    // 상자 순서, 메인 컨테이너 인덱스
    while (num <= order.size()) {
        // 메인 or 보조 컨테이터 앞에 있으면 빼기
        if (idx<boxes.size() && boxes[idx] == num) {
            idx++; num++;
        }
        else if (sub.size() && sub.top() == num) {
            sub.pop(); num++;
        }
        else {
            // 없으면 메인에서 나올때까지 보조에 싣기
            for (; idx < boxes.size() && boxes[idx] != num; idx++) {
                sub.push(boxes[idx]);
            }

            // 다 꺼내도 없으면 불가능
            if (idx >= boxes.size()) break;
            // 있으면 상자 빼기
            else {
                idx++; num++;
            }
        }
    }
    
    return num-1;
}
