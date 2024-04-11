#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string s; getline(cin, s);
	vector<string> words;

	int idx = 0;
	for(int i=0; i<s.length(); i++){
		if(s[i] == ' '){
			words.push_back(s.substr(idx, i-idx));
			idx = i+1;
		}
	}
	words.push_back(s.substr(idx));

	for(int i=words.size()-1; i>=0; i--)
		if(i%2) printf("%s ", words[i].c_str());
}
