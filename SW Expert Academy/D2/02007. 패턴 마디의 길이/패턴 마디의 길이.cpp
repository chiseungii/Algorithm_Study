#include <iostream>
using namespace std;

int main(){
	int T; cin>>T;
	for(int tc=0; tc<T; tc++){
		string s; cin>>s;
		
		printf("#%d ", tc+1);
		
		for(int i=1; i<=s.length()/2; i++){	// i: 마디 길이
			if(s.substr(0, i) == s.substr(i, i)){
				printf("%d\n", i);
				break;
			}
		}
	}
}
