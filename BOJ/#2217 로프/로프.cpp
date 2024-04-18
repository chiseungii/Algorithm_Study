#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N; cin>>N;
    vector<int> weights(N);
    for(int i=0; i<N; cin>>weights[i++]);

    // 최대 중량을 내림차순으로 정렬
    sort(weights.begin(), weights.end(), greater<int>());

    // 무거운 것부터 차례로 계산
    int max_weight = -1;
    for(int i=0; i<weights.size(); i++) {
        int tmp = weights[i]*(i+1);
        if(tmp > max_weight) max_weight = tmp;
    }

    cout<<max_weight;
}
