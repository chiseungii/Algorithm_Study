#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> sum;    // 부분합
    sum.push_back(sequence[0]);
    for (int i = 1; i < sequence.size(); i++)
        sum.push_back(sum[i - 1] + sequence[i]);

    int min_dist = sequence.size(), min_idx = 0;
    int start=-1, end=0; // 투 포인터
    for(; sum[end]<k; end++);
    
    while(end < sequence.size()){
        if(start == -1){
            // k값이면 기록
            if(sum[end] == k){
                if(end+1 < min_dist){
                    min_dist = end+1;
                    min_idx = 0;
                }
                end++;
            }
            // k값보다 크면 줄이기
            else if(sum[end] > k) start++;
            // k값보다 크면 늘이기
            else end++;
        }
        else{
            if(sum[end]-sum[start] == k){
                if(end-start < min_dist){
                    min_dist = end-start;
                    min_idx = start+1;
                }
                end++;
            }
            else if(sum[end]-sum[start] > k) start++;
            else end++;
        }
    }

    return { min_idx, min_idx + min_dist - 1 };
}
