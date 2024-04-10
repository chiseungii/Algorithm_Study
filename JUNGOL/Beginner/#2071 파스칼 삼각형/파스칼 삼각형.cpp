#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,m; cin>>n>>m;
	vector<vector<int>> pas;
	for(int i=0; i<n; i++){
		vector<int> v(n);
		pas.push_back(v);
	}

	pas[0][0] = 1;
	for(int i=1; i<n; i++){
		pas[i][0] = pas[i][i] = 1;
		for(int j=1; j<i; j++)
			pas[i][j] = pas[i-1][j]+pas[i-1][j-1];
	}

	if(m == 1){
		for(int i=0; i<n; i++){
			for(int j=0; j<=i; j++) printf("%d ", pas[i][j]);
			cout<<endl;
		}
	}
	else if(m == 2){
		for(int i=n-1; i>=0; i--){
			for(int j=0; j<n-i-1; j++) printf(" ");
			for(int j=0; j<=i; j++) printf("%d ", pas[i][j]);
			cout<<endl;
		}
	}
	else{
		for(int i=0; i<n; i++){
			for(int j=0; j<=i; j++) printf("%d ", pas[n-j-1][n-i-1]);
			cout<<endl;
		}
	}
}
