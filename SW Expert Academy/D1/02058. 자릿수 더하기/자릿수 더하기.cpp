#include <iostream>
using namespace std;

int main(){
	int N; cin>>N;
	
	int answer = 0;
	while(N){
		answer += N%10;
		N /= 10;
	}
	
	cout<<answer;
}
