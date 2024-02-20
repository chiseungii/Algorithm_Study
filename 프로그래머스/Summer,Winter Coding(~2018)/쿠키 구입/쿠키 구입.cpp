#include <string>
#include <vector>

using namespace std;

int solution(vector<int> cookie) {
    // 누적합 배열 왼쪽부터, 오른쪽부터
    vector<int> leftSum(cookie.size()+1, 0);
    vector<int> rightSum(cookie.size()+1, 0);

    leftSum[1] = cookie[0];
    rightSum[cookie.size()] = cookie[cookie.size() - 1];

    for (int i = 1; i < cookie.size(); i++)
        leftSum[i+1] = leftSum[i] + cookie[i];
    for (int i = cookie.size() - 1; i > 0; i--)
        rightSum[i] = rightSum[i + 1] + cookie[i-1];

    leftSum.push_back(0);
    rightSum.push_back(0);

    // 최댓값 구하기
    int max_cookie = 0;   // 쿠키 최댓값
    for (int i = 1; i < cookie.size()+1; i++) {   // i: 기준점
        // 기준점부터 양쪽 끝까지 합이 같을 때
        if (leftSum[i] == rightSum[i + 1]) {
            if (leftSum[i] > max_cookie)
                max_cookie = leftSum[i];
            continue;
        }

        int left = 0, right = cookie.size() + 1;
        while (left < i && right > i+1) {
            int a = leftSum[i] - leftSum[left];
            int b = rightSum[i + 1] - rightSum[right];

            if (a == b) {
                if (a > max_cookie)
                    max_cookie = a;
                break;
            }
            else if (a < b) right--;
            else left++;
        }
    }

    return max_cookie;
}
