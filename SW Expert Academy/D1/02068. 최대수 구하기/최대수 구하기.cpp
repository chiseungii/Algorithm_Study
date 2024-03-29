#include <iostream>
using namespace std;

int main(){
	int T; cin>>T;
	for(int i=0; i<T; i++){
		int max = -1;
		for(int j=0; j<10; j++){
			int n; cin>>n;
			if(n > max) max = n;
		}
		
		printf("#%d %d\n", i+1, max);
	}
}
