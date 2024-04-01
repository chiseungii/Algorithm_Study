#include <iostream>
#include <vector>
using namespace std;

int main(){
	int T; cin>>T;
	for(int tc=0; tc<T; tc++){
		int N,M; cin>>N>>M;
		vector<int> A(N), B(M);
		
		for(int i=0; i<N; i++) cin>>A[i];
		for(int i=0; i<M; i++) cin>>B[i];
		
		printf("#%d ", tc+1);
		
		// A의 길이를 더 짧게 맞춘다
		if(N > M){
			vector<int> tmp = A;
			A = B;
			B = tmp;
			
			int n = N;
			N = M;
			M = n;
		}
		
		// B의 0번째부터 하나씩 A를 대가며 계산하기
		int max = -1;
		for(int i=0; i<=M-N; i++){
			int sum = 0;
			for(int j=0; j<N; j++)
				sum += A[j]*B[i+j];
			
			if(sum > max) max = sum;
		}
		
		printf("%d\n", max);
	}
}
