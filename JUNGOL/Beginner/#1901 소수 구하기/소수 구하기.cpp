#include <iostream>
#include <vector>
using namespace std;

#define MAX_NUM 1000000

int main() {
	// 에라스토테네스의 체
	vector<bool> isPrime(MAX_NUM+1, true);
	isPrime[1] = false;

	for(int i=4; i<=MAX_NUM; i+=2) isPrime[i] = false;
	for(int i=3; i<=MAX_NUM; i+=2)
		for(int j=i*2; j<=MAX_NUM; j+=i) isPrime[j] = false;

	int n; cin>>n;
	for(int i=0; i<n; i++){
		int m; cin>>m;

		// m이 소수면 바로 출력
		if(isPrime[m]) printf("%d\n", m);
		else{
			// 왼쪽으로 가까운 소수
			int left, right;
			for(int j=m-1; j>0; j--){
				if(isPrime[j]){
					left = j;
					break;
				}
			}

			// 오른쪽으로 가까운 소수
			for(int j=m+1; j<=MAX_NUM; j++){
				if(isPrime[j]){
					right = j;
					break;
				}
			}

			if(m-left == right-m) printf("%d %d\n", left, right);
			else if(m-left > right-m) printf("%d\n", right);
			else printf("%d\n", left);
		}
	}
}
