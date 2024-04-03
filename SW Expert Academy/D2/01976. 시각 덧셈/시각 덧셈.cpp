#include <iostream>
#include <vector>
using namespace std;

int main(){
	int T; cin>>T;
	for(int tc=0; tc<T; tc++){
		vector<int> t(4);
		for(int i=0; i<4; cin>>t[i++]);
		
		printf("#%d ", tc+1);
		
		t[1] += t[3];
		if(t[1] >= 60){
			t[1] -= 60;
			t[0]++;
		}
		
		t[0] += t[2];
		if(t[0] > 12) t[0] -= 12;
		
		printf("%d %d\n", t[0], t[1]);
	}
}
