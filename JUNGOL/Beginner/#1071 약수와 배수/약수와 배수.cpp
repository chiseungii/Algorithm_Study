#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; cin>>n;
	vector<int> v(n);
	for(int i=0; i<n; cin>>v[i++]);
	int m; cin>>m;

	int a=0, b=0;
	for(int n : v){
		if(!(m%n)) a += n;
		if(!(n%m)) b += n;
	}

	printf("%d\n%d\n", a, b);
}
