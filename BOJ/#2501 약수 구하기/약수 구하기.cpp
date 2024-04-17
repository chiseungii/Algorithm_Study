#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int N,K; cin>>N>>K;

    vector<int> nums = {1, N};
    int sq = sqrt(N);
    for(int i=2; i<sq; i++) {
        if(!(N%i)) {
            nums.push_back(i);
            nums.push_back(N/i);
        }
    }
    if(sq*sq == N) nums.push_back(sq);
    else if(!(N%sq)) {
        nums.push_back(sq);
        nums.push_back(N/sq);
    }
    sort(nums.begin(), nums.end());

    if(K > nums.size()) cout<<0;
    else cout<<nums[K-1];
}
