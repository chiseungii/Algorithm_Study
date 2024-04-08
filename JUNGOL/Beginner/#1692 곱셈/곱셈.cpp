#include <iostream>

using namespace std;

int main() {
	int a,b; cin>>a>>b;

	int base=1, sum=0;
	while(b){
		int tmp = a*(b%10);
		sum += tmp*base;
		printf("%d\n", tmp);

		base *= 10;
		b /= 10;
	}

	printf("%d\n", sum);
}
