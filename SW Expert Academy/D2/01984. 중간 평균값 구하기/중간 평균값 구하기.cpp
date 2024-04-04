#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int T; cin>>T;
	for(int tc=0; tc<T; tc++){
		vector<int> nums(10);
		for(int i=0; i<10; cin>>nums[i++]);
		
		printf("#%d ", tc+1);
		
		sort(nums.begin(), nums.end());
		int sum = 0;
		for(int i=1; i<9; sum+=nums[i++]);
		
		printf("%d\n", (int)((double)sum/8.+0.5));
	}
}
