#include <iostream>
using namespace std;

int main(){
	int T; cin>>T;
	for(int i=0; i<T; i++){
		printf("#%d ", i+1);
		
		int a,b; cin>>a>>b;
		if(a < b) printf("<\n");
		else if(a == b) printf("=\n");
		else printf(">\n");
	}
}
