#include <iostream>
#include <map>
using namespace std;

int main(){
	int T; cin>>T;
	for(int tc=0; tc<T; tc++){
		int n; cin>>n;
		map<int, int> m;	// <점수, 개수>
		for(int i=0; i<1000; i++){
			cin>>n;
			m[n]++;
		}
		
		printf("#%d ", tc+1);
		
		map<int, int>::iterator it;
		int max_cnt=-1, max_num=-1;
		for(it=m.begin(); it!=m.end(); it++){
			if(it->second >= max_cnt){
				max_cnt = it->second;
				max_num = it->first;
			}
		}
		
		printf("%d\n", max_num);
	}
}
