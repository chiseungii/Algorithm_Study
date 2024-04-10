#include <iostream>

using namespace std;

int main() {
	int n; cin>>n;

	if(n<1 || n>50 || !(n%2)) cout<<"INPUT ERROR!\n";
	else{
		int cnt = n*2-1;
		for(int i=0; i<n; i++, cnt-=2){
			for(int j=0; j<i*2; j++) printf(" ");
			for(int j=0; j<cnt; j++) printf("%d ", i);
			cout<<endl;
		}
	}
}
