#include <iostream>
using namespace std;

int main(){
	int T; cin>>T;
	for(int tc=0; tc<T; tc++){
		printf("#%d ", tc+1);
		
		int N; cin>>N;
		int sum = 0;
		for(int i=1; i<=N; i++){
			if(i%2) sum += i;
			else sum -= i;
		}
		
		printf("%d\n", sum);
	}
}
