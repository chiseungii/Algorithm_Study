#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; cin>>n;
	vector<vector<int>> square;
	for(int i=0; i<n; i++){
		vector<int> v(n);
		square.push_back(v);
	}

	square[0][0] = 1;
	int num=2, dir=1;

	for(int i=1; i<n; i++){
		if(dir == 1){
			for(int j=0; j<i+1; j++)
				square[i-j][j] = num++;
		}
		else{
			for(int j=0; j<i+1; j++)
				square[j][i-j] = num++;
		}

		dir = -dir;
	}

	for(int i=1; i<n-1; i++){
		if(dir == 1){
			for(int j=0; j<n-i; j++)
				square[n-j-1][i+j] = num++;
		}
		else{
			for(int j=0; j<n-i; j++)
				square[i+j][n-1-j] = num++;
		}

		dir = -dir;
	}

	square[n-1][n-1] = num;

	for(vector<int> sq : square){
		for(int s : sq) printf("%d ", s);
		cout<<endl;
	}
}
