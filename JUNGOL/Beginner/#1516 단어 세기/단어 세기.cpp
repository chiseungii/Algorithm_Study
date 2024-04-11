#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	while(1){
		string s; getline(cin, s);
		if(s == "END") break;

		map<string, int> cnt;	// <단어, 개수>
		int idx = 0;
		for(int i=0; i<s.length(); i++){
			if(s[i] == ' '){
				cnt[s.substr(idx, i-idx)]++;
				idx = i+1;
			}
		}
		cnt[s.substr(idx)]++;

		map<string, int>::iterator it;
		for(it=cnt.begin(); it!=cnt.end(); it++)
			printf("%s : %d\n", it->first.c_str(), it->second);
	}
}
