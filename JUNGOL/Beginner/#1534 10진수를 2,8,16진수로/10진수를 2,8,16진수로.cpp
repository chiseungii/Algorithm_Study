#include <iostream>

using namespace std;

int main() {
	int n,b; cin>>n>>b;

	// 2진수
	if(b == 2){
		string two = "";
		while(n){
			two = to_string(n%2) + two;
			n /= 2;
		}

		cout<<two<<endl;
	}
	// 8진수
	else if(b == 8){
		string eight = "";
		while(n){
			eight = to_string(n%8) + eight;
			n /= 8;
		}

		cout<<eight<<endl;
	}
	// 16진수
	else{
		string sixteen = "";
		while(n){
			int tmp = n%16;

			if(tmp == 10) sixteen = "A"+sixteen;
			else if(tmp == 11) sixteen = "B"+sixteen;
			else if(tmp == 12) sixteen = "C"+sixteen;
			else if(tmp == 13) sixteen = "D"+sixteen;
			else if(tmp == 14) sixteen = "E"+sixteen;
			else if(tmp == 15) sixteen = "F"+sixteen;
			else sixteen = to_string(tmp)+sixteen;

			n /= 16;
		}

		cout<<sixteen<<endl;
	}
}
