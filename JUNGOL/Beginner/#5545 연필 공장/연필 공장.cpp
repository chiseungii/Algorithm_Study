#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b){
	while(b){
		int tmp = a;
		a = b;
		b = tmp%b;
	}
	
	return a;
}

int main() {
	int p,v,k; cin>>p>>v>>k;
	p++; v++;

	// p와 v의 최소공배수
	long long g = (long long)p*(long long)v/gcd(p, v);

	vector<int> cnt(4);

	cnt[1] = k/g;
	cnt[2] = k/v-cnt[1];
	cnt[3] = k/p-cnt[1];
	cnt[0] = k-cnt[1]-cnt[2]-cnt[3];

	printf("%d %d %d %d\n", cnt[0], cnt[1], cnt[2], cnt[3]);
}
