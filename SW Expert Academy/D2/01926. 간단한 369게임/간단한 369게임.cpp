#include <iostream>
#include <vector>
using namespace std;

int main(){
	int N; cin>>N;
	vector<int> clap(N+1, 0);
	
	for(int i=3; i<=N; i++){
		if(i%10==3 || i%10==6 || i%10==9)
			clap[i] = clap[i/10]+1;
		else clap[i] = clap[i/10];
	}
	
	for(int i=1; i<=N; i++){
		if(!clap[i]) printf("%d ", i);
		else{
			for(int j=0; j<clap[i]; j++)
				printf("-");
			printf(" ");
		}
	}
}
