#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b){
	while(b){
		int tmp = a;
		a = b;
		b = tmp%b;
	}

	return a;
}

int main() {
	int n; cin>>n;
	vector<int> nums(n);
	for(int i=0; i<n; cin>>nums[i++]);

	int a=nums[0], b=nums[0];
	for(int i=1; i<n; i++){
		a = gcd(a, nums[i]);
		b = b*nums[i]/gcd(b, nums[i]);
	}

	printf("%d %d\n", a, b);
}
