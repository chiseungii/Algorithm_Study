#include <iostream>
#include <vector>
using namespace std;

int main(){
	int T; cin>>T;
	for(int tc=0; tc<T; tc++){
		int N; cin>>N;
		vector<char> alpha;
		for(int i=0; i<N; i++){
			char C; int K;
			cin>>C>>K;
			for(int j=0; j<K; alpha.push_back(C), j++);
		}
		
		printf("#%d\n", tc+1);
		
		for(int i=0; i<alpha.size(); i+=10){
			for(int j=i; j<alpha.size() && j<i+10; j++)
				printf("%c", alpha[j]);
			cout<<endl;
		}
	}
}
