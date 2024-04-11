#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> v;
	int max_len = 0;
	for(int i=0; i<5; i++){
		string s; cin>>s;
		v.push_back(s);

		if(s.length() > max_len) max_len = s.length();
	}

	for(int i=0; i<max_len; i++){
		for(int j=0; j<5; j++){
			if(i >= v[j].length()) continue;
			else printf("%c", v[j][i]);
		}
	}
}
