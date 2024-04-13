#include <iostream>
using namespace std;

int main(){
	int a,b; cin>>a>>b;
	
	int base=1, sum=0;
	while(b){
		int tmp = a*(b%10);
		cout<<tmp<<endl;
		sum += base*tmp;
		
		base *= 10;
		b /= 10;
	}
	cout<<sum<<endl;
}
