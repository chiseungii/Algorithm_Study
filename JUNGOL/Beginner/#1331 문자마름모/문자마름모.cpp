#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; cin>>n;
	vector<vector<char>> square;
	for(int i=0; i<n*2-1; i++){
		vector<char> v(n*2-1, ' ');
		square.push_back(v);
	}

	char c = 'A';
	for(int i=n-1; i>=1; i--){
		int x=n-i-1, y=n-1;

		square[x][y] = c++;
		if(c > 'Z') c = 'A';
		
		// 왼쪽 아래 대각선
		for(int j=0; j<i; j++){
			square[++x][--y] = c++;
			if(c > 'Z') c = 'A';
		}

		// 오른쪽 아래 대각선
		for(int j=0; j<i; j++){
			square[++x][++y] = c++;
			if(c > 'Z') c = 'A';
		}

		// 오른쪽 위 대각선
		for(int j=0; j<i; j++){
			square[--x][++y] = c++;
			if(c > 'Z') c = 'A';
		}

		// 왼쪽 위 대각선
		for(int j=0; j<i-1; j++){
			square[--x][--y] = c++;
			if(c > 'Z') c = 'A';
		}
	}

	square[n-1][n-1] = c;

	for(int i=0; i<square.size(); i++){
		for(int j=0; j<square.size(); j++)
			printf("%c ", square[i][j]);
		cout<<endl;
	}
}
