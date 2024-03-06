#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B){
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int idxA=0, idxB=B.size()-1;
    
    int answer = 0;
    for(; idxA<A.size(); idxA++, idxB--)
        answer += (A[idxA]*B[idxB]);
    
    return answer;
}
