#include <iostream>
#include <vector>
using namespace std;

int main() {
	int d,k; cin>>d>>k;

	// d번째 날까지 준 떡의 조합 구하기
	// DP[i][0]: 첫번째 날 준 떡의 개수 (A)
	// DP[i][1]: 두번째 날 준 떡의 개수 (B)
	vector<vector<int>> DP;
	for(int i=0; i<d; i++){
		vector<int> v(2);
		DP.push_back(v);
	}

	DP[0][0] = DP[1][1] = 1;
	DP[0][1] = DP[1][0] = 0;

	for(int i=2; i<d; i++){
		DP[i][0] = DP[i-1][0]+DP[i-2][0];
		DP[i][1] = DP[i-1][1]+DP[i-2][1];
	}

	// 완전탐색으로 A와 B 구하기
	int a=DP[d-1][0], b=DP[d-1][1];
	int A=1, B=1;
	while(1){
		if(A*a+B*b == k){
			printf("%d\n%d\n", A, B);
			break;
		}

		B++;
		if(A*a+B*b > k){
			A++;
			B = A;
		}
	}
}
