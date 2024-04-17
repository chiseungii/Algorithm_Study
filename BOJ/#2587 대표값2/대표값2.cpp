#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums;

    int sum = 0;
    for(int i=0; i<5; i++) {
        int n; cin>>n;
        sum += n;
        nums.push_back(n);
    }
    sort(nums.begin(), nums.end());

    cout<<sum/5<<endl;
    cout<<nums[2]<<endl;
}
