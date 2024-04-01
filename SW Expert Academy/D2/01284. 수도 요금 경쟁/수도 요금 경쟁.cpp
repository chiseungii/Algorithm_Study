#include <iostream>
using namespace std;

int main(){
	int T; cin>>T;
	for(int tc=0; tc<T; tc++){
		int P,Q,R,S,W;
		cin>>P>>Q>>R>>S>>W;
		
		printf("#%d ", tc+1);
		
		int A = P*W;
		int B = W>R ? Q+S*(W-R) : Q;
		
		if(A > B) printf("%d\n", B);
		else printf("%d\n", A);
	}
}
