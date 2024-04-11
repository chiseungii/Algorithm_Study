#include <iostream>
#include <string>
using namespace std;

int main() {
	string s,t; cin>>s>>t;
	while(s.find(t) != string::npos){
		s.erase(s.find(t), t.length());
	}

	cout<<s<<endl;
}
