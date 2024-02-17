#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B) {
    // A, B 둘 다 오름차순 정렬
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    // 투 포인터 이용
    int A_idx=0, B_idx=0, len=A.size(), cnt=0;
    while(A_idx<len && B_idx<len){
        // B가 현재 A 이길 수 있으면 출전
        if(B[B_idx] > A[A_idx]){
            cnt++;
            B_idx++; A_idx++;
        }
        // 못 이기면 이길 수 있는 B 찾기
        else for(; B_idx<len && A[A_idx]>=B[B_idx]; B_idx++);
    }
    
    return cnt;
}
