#include <iostream>
#include <string>
using namespace std;

int main() {
	string s; cin>>s;

	int answer = 0;
	for(int i=0; i<s.length(); i++){
		if(i == 0) answer += 10;
		else if(s[i] == s[i-1]) answer += 5;
		else answer += 10;
	}

	cout<<answer<<endl;
}
