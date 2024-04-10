#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
	if(!(n%2)) return false;
	
	for(int i=3; i<=sqrt(n); i+=2)
		if(!(n%i)) return false;

	return true;
}

int main() {
	for(int i=0; i<5; i++){
		int n; cin>>n;

		if(n == 1) cout<<"number one\n";
		else if(isPrime(n)) cout<<"prime number\n";
		else cout<<"composite number\n";
	}
}
