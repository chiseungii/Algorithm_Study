#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; cin >> n;
	vector<vector<int>> snail;
	for (int i = 0; i < n; i++) {
		vector<int> v(n);
		snail.push_back(v);
	}

	int cnt = n, dir = 0;	// 대각선, 왼쪽, 위
	int x = -1, y = -1, num = 0;
	while (cnt) {
		if (dir == 0) {
			for (int i = 0; i < cnt; i++) {
				snail[++x][++y] = num++;
				if (num >= 10) num = 0;
			}
		}
		else if (dir == 1) {
			for (int i = 0; i < cnt; i++) {
				snail[x][--y] = num++;
				if (num >= 10) num = 0;
			}
		}
		else {
			for (int i = 0; i < cnt; i++) {
				snail[--x][y] = num++;
				if (num >= 10) num = 0;
			}
		}

		dir = (dir + 1) % 3; cnt--;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) printf("%d ", snail[i][j]);
		cout << endl;
	}
}
