#include <iostream>

using namespace std;

int main() {
	int n; cin>>n;

	if(n<1 || n>50 || !(n%2)) cout<<"INPUT ERROR!\n";
	else{
		for(int i=0; i<n/2+1; i++){
			for(int j=0; j<=i; j++) printf("%d ", j+1);
			cout<<endl;
		}

		for(int i=n/2; i>=1; i--){
			for(int j=0; j<i; j++) printf("%d ", j+1);
			cout<<endl;
		}
	}
}
