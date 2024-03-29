#include <iostream>
using namespace std;

int main(){
	int T; cin>>T;
	for(int tc=0; tc<T; tc++){
		printf("#%d ", tc+1);
		
		string s; cin>>s;
		int month = stoi(s.substr(4, 2));
		int day = stoi(s.substr(6));
		
		// 월이 불가능한 경우
		if(month<1 || month>12) printf("-1\n");
		// 일이 불가능한 경우
		else if(month==2 && (day<1 || day>28)) printf("-1\n");
		else if((month==4 || month==6 || month==8 || month==9 || month==11)
			&& (day<1 || day>30)) printf("-1\n");
		else if((month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
			&& (day<1 || day>31)) printf("-1\n");
		// 나머지는 가능
		else printf("%04d/%02d/%02d\n", stoi(s.substr(0, 4)), month, day);
	}
}
