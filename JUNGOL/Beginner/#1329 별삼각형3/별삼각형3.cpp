#include <iostream>

using namespace std;

int main() {
	int n; cin>>n;

	if(n<1 || n>100 || !(n%2)) cout<<"INPUT ERROR!\n";
	else{
		int star = 1;
		for(int i=0; i<n/2+1; i++, star+=2){
			for(int j=0; j<i; j++) printf(" ");
			for(int j=0; j<star; j++) printf("*");
			cout<<endl;
		}

		star -= 4;
		for(int i=n/2-1; i>=0; i--, star-=2){
			for(int j=0; j<i; j++) printf(" ");
			for(int j=0; j<star; j++) printf("*");
			cout<<endl;
		}
	}
}
