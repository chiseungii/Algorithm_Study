#include <iostream>
#include <vector>
using namespace std;

int main(){
	int T; cin>>T;
	for(int tc=0; tc<T; tc++){
		int N; cin>>N;
		vector<vector<int>> nums;
		for(int i=0; i<N; i++){
			vector<int> v(N);
			nums.push_back(v);
		}
		
		printf("#%d\n", tc+1);
		
		nums[0][0] = 1;
		for(int i=1; i<N; i++){
			// 제일 왼쪽, 오른쪽은 1
			nums[i][0] = nums[i][i] = 1;
			for(int j=1; j<i; j++)
				nums[i][j] = nums[i-1][j-1]+nums[i-1][j];
		}
		
		for(int i=0; i<N; i++){
			for(int j=0; j<=i; j++)
				printf("%d ", nums[i][j]);
			cout<<endl;
		}
	}
}
