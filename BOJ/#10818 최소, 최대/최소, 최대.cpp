#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N; cin>>N;
    vector<int> nums(N);
    for(int i=0; i<N; cin>>nums[i++]);

    int min_num = *min_element(nums.begin(), nums.end());
    int max_num = *max_element(nums.begin(), nums.end());
    printf("%d %d\n", min_num, max_num);
}
