#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; cin>>n;
	vector<vector<int>> snail;
	for(int i=0; i<n; i++){
		vector<int> v(n);
		snail.push_back(v);
	}

	for(int i=0; i<n; snail[0][i++]=i+1);
	int num = n+1;

	int dir=0;	// 아래, 왼쪽, 위, 오른쪽
	int cnt=(n-1)*2+1;
	int x=0, y=n-1;	// 현재 위치
	while(cnt > 1){
		if(dir == 0){
			for(int i=0; i<cnt/2; i++)
				snail[++x][y] = num++;
			dir++; dir%=4;
		}
		else if(dir == 1){
			for(int i=0; i<cnt/2; i++)
				snail[x][--y] = num++;
			dir++; dir%=4;
		}
		else if(dir == 2){
			for(int i=0; i<cnt/2; i++)
				snail[--x][y] = num++;
			dir++; dir%=4;
		}
		else{
			for(int i=0; i<cnt/2; i++)
				snail[x][++y] = num++;
			dir++; dir%=4;
		}

		cnt--;
	}

	for(vector<int> sn : snail){
		for(int s : sn) printf("%d ", s);
		cout<<endl;
	}
}
