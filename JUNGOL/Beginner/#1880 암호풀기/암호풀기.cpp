#include <iostream>
#include <string>
using namespace std;

int main() {
	string password; getline(cin, password);
	string s; getline(cin, s);

	for(int i=0; i<s.length(); i++){
		if(s[i] == ' ') printf(" ");
		else if(isupper(s[i])){
			int tmp = s[i]-'A';
			printf("%c", toupper(password[tmp]));
		}
		else{
			int tmp = s[i]-'a';
			printf("%c", password[tmp]);
		}
	}
}
