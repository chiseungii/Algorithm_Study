#include <iostream>

using namespace std;

int main() {
	int n,m; cin>>n>>m;
	
	if(n<1 || n>100 || m<1 || m>3){
		cout<<"INPUT ERROR!\n";
		return 0;
	}

	if(m == 1){
		for(int i=0; i<n; i++){
			for(int j=0; j<=i; j++) printf("*");
			cout<<endl;
		}
	}
	else if(m == 2){
		for(int i=0; i<n; i++){
			for(int j=0; j<n-i; j++) printf("*");
			cout<<endl;
		}
	}
	else{
		for(int i=0; i<n; i++){
			for(int j=0; j<n-i-1; j++) printf(" ");
			for(int j=0; j<i*2+1; j++) printf("*");
			cout<<endl;
		}
	}
}
