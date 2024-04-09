#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a,b,c; cin>>a>>b>>c;
	vector<int> cnt(10, 0);
	a = a*b*c;

	while(a){
		cnt[a%10]++;
		a /= 10;
	}

	for(int c : cnt) printf("%d\n", c);
}
