#include <iostream>
using namespace std;

int main(){
	int T; cin>>T;
	for(int tc=0; tc<T; tc++){
		string s; cin>>s;
		
		printf("#%d ", tc+1);
		
		// 투 포인터 형식
		int left=0, right=s.length()-1;
		bool flag = true;
		for(; left<=right; left++, right--){
			if(s[left] != s[right]){
				flag = false;
				printf("0\n");
				break;
			}
		}
		
		if(flag) printf("1\n");
	}
}
