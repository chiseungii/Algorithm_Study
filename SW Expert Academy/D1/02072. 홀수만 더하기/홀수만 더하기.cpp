#include <iostream>
using namespace std;

int main(){
	int T; cin>>T;
	for(int tc=0; tc<T; tc++){
		int sum = 0;
		for(int i=0; i<10; i++){
			int n; cin>>n;
			if(n%2) sum += n;
		}
		
		printf("#%d %d\n", tc+1, sum);
	}
}
