#include <iostream>
#include <string>
using namespace std;

int main() {
	string s; cin>>s;
	int sum = 0;

	for(int i=0; i<s.length(); i++){
		if(s[i] == '1') sum = sum*2+1;
		else sum = sum*2;
	}

	printf("%d\n", sum);
}
