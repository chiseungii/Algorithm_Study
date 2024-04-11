#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> words;	// 단어 저장
	map<string, bool> isIn;	// 있는지 확인
	while(1){
		string s; getline(cin, s);
		if(s == "END") break;

		int idx = 0;
		for(int i=0; i<s.length(); i++){
			if(s[i] == ' '){
				string tmp = s.substr(idx, i-idx);
				if(!isIn[tmp]){
					words.push_back(tmp);
					isIn[tmp] = true;
				}

				idx = i+1;
			}
		}

		string tmp = s.substr(idx);
		if(!isIn[tmp]){
			words.push_back(tmp);
			isIn[tmp] = true;
		}

		for(string word : words) printf("%s ", word.c_str());
		cout<<endl;
	}
}
