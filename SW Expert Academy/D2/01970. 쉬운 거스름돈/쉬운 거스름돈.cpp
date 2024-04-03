#include <iostream>
#include <vector>
using namespace std;

int main(){
	int T; cin>>T;
	vector<int> money = {50000, 10000, 5000, 1000, 500, 100, 50, 10};
	for(int tc=0; tc<T; tc++){
		int N; cin>>N;
		
		printf("#%d\n", tc+1);
		
		for(int i=0; i<money.size(); i++){
			printf("%d ", N/money[i]);
			N %= money[i];
		}
        cout<<endl;
	}
}
