#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; cin>>nums[i++]);
    sort(nums.begin(), nums.end());

    cout<<nums[0]*nums[n-1];
}
