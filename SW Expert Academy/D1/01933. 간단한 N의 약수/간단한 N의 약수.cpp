#include <iostream>
using namespace std;

int main(){
	int N; cin>>N;
	
	for(int i=1; i<=N; i++)
		if(!(N%i)) printf("%d ", i);
}
