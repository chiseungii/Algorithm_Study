#include <iostream>
using namespace std;

int main(){
	int n; cin>>n;
	int num = 2;
	printf("1 ");
	for(int i=1; i<=n; printf("%d ", num), num*=2, i++);
}
