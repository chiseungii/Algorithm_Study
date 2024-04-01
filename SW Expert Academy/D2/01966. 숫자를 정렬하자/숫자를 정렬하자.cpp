#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int T; cin>>T;
	for(int tc=0; tc<T; tc++){
		int N; cin>>N;
		vector<int> nums(N);
		for(int i=0; i<N; i++) cin>>nums[i];
		
		printf("#%d ", tc+1);
		
		sort(nums.begin(), nums.end());
		for(int i=0; i<N; i++) printf("%d ", nums[i]);
		cout<<endl;
	}
}
