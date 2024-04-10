#include <iostream>
#include <vector>
using namespace std;

#define MAX_NUM 10000

int main() {
	// 에라토스테네스의 체
	vector<bool> isPrime(MAX_NUM+1, true);
	isPrime[1] = false;

	for(int i=4; i<=MAX_NUM; i+=2) isPrime[i] = false;
	for(int i=3; i<=MAX_NUM; i+=2){
		if(isPrime[i])
			for(int j=i*2; j<=MAX_NUM; j+=i)
				isPrime[j] = false;
	}

	int m,n; cin>>m>>n;
	int min_prime=MAX_NUM, sum=0;
	for(int i=n; i>=m; i--){
		if(isPrime[i]){
			min_prime = i;
			sum += i;
		}
	}

	if(sum == 0) printf("-1\n");
	else printf("%d\n%d\n", sum, min_prime);
}
