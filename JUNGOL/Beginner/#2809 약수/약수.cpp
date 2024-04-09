#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int n; cin>>n;
	vector<int> nums = {1, n};

	for(int i=2; i<=sqrt(n); i++){
		if(!(n%i)){
			nums.push_back(i);
			if(n/i != i) nums.push_back(n/i);
		}
	}
	sort(nums.begin(), nums.end());

	for(int n : nums) printf("%d ", n);
}
