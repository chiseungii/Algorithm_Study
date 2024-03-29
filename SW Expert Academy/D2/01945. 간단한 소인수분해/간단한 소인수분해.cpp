#include <iostream>
#include <vector>
using namespace std;

int main(){
	int T; cin>>T;
	for(int tc=0; tc<T; tc++){
		int N; cin>>N;
		vector<int> divisor = {2, 3, 5, 7, 11};
		
		printf("#%d ", tc+1);
		for(int i=0; i<divisor.size(); i++){
			int cnt = 0;
			while(!(N%divisor[i])){
				cnt++;
				N /= divisor[i];
			}
			printf("%d ", cnt);
		}
		cout<<endl;
	}
}
