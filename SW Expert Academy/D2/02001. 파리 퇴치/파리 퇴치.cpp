#include <iostream>
#include <vector>
using namespace std;

int main(){
	int T; cin>>T;
	for(int tc=0; tc<T; tc++){
		int N,M; cin>>N>>M;
		vector<vector<int>> flies;
		for(int i=0; i<N; i++){
			vector<int> v(N);
			for(int j=0; j<N; cin>>v[j++]);
			flies.push_back(v);
		}
		
		printf("#%d ", tc+1);
		
		int max_fly = 0;
		for(int i=0; i<=N-M; i++){
			for(int j=0; j<=N-M; j++){
				int sum_fly = 0;
				for(int x=i; x<i+M; x++)
					for(int y=j; y<j+M; sum_fly+=flies[x][y++]);
				
				if(sum_fly > max_fly) max_fly = sum_fly;
			}
		}
		
		printf("%d\n", max_fly);
	}
}
