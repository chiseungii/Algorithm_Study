#include <iostream>

using namespace std;

int main() {
	int a,b; cin>>a>>b;

	// a가 더 작게 바꾸기
	if(a > b){
		int tmp = a;
		a = b;
		b = tmp;
	}

	for(int i=a; i>=1; i--){
		if(!(a%i) && !(b%i)){
			printf("%d\n", i);
			break;
		}
	}

	for(int i=b; ; i++){
		if(!(i%a) && !(i%b)){
			printf("%d\n", i);
			break;
		}
	}
}
