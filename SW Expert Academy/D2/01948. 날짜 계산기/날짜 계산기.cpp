#include <iostream>
#include <vector>
using namespace std;

int main(){
	int T; cin>>T;
	for(int tc=0; tc<T; tc++){
		vector<int> days(4);
		for(int i=0; i<4; cin>>days[i++]);
		
		printf("#%d ", tc+1);
		
		vector<int> plus = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
		int sum = 0;
		for(int i=days[0]; i<days[2]; sum += plus[i++-1]);
		sum += (days[3]-days[1]+1);
		
		printf("%d\n", sum);
	}
}
