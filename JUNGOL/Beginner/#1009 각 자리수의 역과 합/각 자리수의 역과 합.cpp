#include <iostream>

using namespace std;

int main() {
	while(1){
		int n; cin>>n;
		if(n == 0) break;

		int sum=0, reverse=0;
		while(n){
			reverse = reverse*10+(n%10);
			sum += (n%10);
			n /= 10;
		}
		
		printf("%d %d\n", reverse, sum);
	}
}
