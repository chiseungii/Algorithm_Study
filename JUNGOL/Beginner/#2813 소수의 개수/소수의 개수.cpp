#include <iostream>
#include <vector>
using namespace std;

#define MAX_NUM 3000000

int main() {
	// 에라토스테네스의 체
	vector<bool> isPrime(MAX_NUM+1, true);
	isPrime[1] = false;

	for(int i=4; i<=MAX_NUM; i+=2) isPrime[i] = false;
	for(int i=3; i<=MAX_NUM; i+=2){
		if(isPrime[i]){
			for(int j=i*2; j<=MAX_NUM; j+=i)
				isPrime[j] = false;
		}
	}

	int m,n; cin>>m>>n;
	int cnt = 0;
	for(int i=m; i<=n; i++)
		if(isPrime[i]) cnt++;

	printf("%d\n", cnt);
}
