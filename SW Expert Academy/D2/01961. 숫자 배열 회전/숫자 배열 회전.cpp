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
			for(int j=0; j<N; cin>>v[j++]);
			nums.push_back(v);
		}
		
		printf("#%d\n", tc+1);
		
		for(int i=0; i<N; i++){
			// 90도 회전
			for(int j=0; j<N; j++) printf("%d", nums[N-j-1][i]);
			cout<<' ';
			
			// 180도 회전
			for(int j=0; j<N; j++) printf("%d", nums[N-i-1][N-j-1]);
			cout<<' ';
			
			// 270도 회전
			for(int j=0; j<N; j++) printf("%d", nums[j][N-i-1]);
			cout<<endl;
		}
	}
}
