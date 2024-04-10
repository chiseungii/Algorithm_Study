#include <iostream>

using namespace std;

int main() {
	int n; cin>>n;

	if(n<1 || n>100 || !(n%2)) cout<<"INPUT ERROR!\n";
	else{
		int a = n/2+1;
		for(int i=a; i>=1; i--){
			for(int j=0; j<a-i; j++) printf(" ");
			for(int j=0; j<i; j++) printf("*");
			cout<<endl;
		}

		int b = a-1;
		for(int i=2; i<=a; i++){
			for(int j=0; j<b; j++) printf(" ");
			for(int j=0; j<i; j++) printf("*");
			cout<<endl;
		}
	}
}
