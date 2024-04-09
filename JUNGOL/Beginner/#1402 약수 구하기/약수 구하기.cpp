#include <iostream>

using namespace std;

int main() {
	int n,k; cin>>n>>k;

	if(k == 1){
		printf("1\n");
		return 0;
	}

	int cnt = 1;
	for(int i=2; i<=n; i++){
		if(!(n%i)) cnt++;
		if(cnt == k){
			printf("%d\n", i);
			return 0;
		}
	}

	printf("0\n");
}
