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

	int num = 1;
	int x=0, y=n/2;

	while(num <= n*n){
		square[x][y] = num;

		if(!(num%n)) x++;
		else{
			x--; y--;
		}

		if(x < 0) x += n;
		else if(x >= n) x -= n;
		if(y < 0) y += n;
		else if(y >= n) y -= n;

		num++;
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++) printf("%d ", square[i][j]);
		cout<<endl;
	}
}
