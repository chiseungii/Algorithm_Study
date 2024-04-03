#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T; cin >> T;
	for (int tc = 0; tc < T; tc++) {
		int N; cin >> N;

		printf("#%d\n", tc + 1);

		vector<vector<int>> snail;
		for (int i = 0; i < N; i++) {
			vector<int> v(N);
			snail.push_back(v);
		}

		int i = 0, j = -1;
		for (int i = 0; i < N; snail[0][++j] = i++ + 1);

		int dir = 0;	// 0,1,2,3: 아래, 왼쪽, 위, 오른쪽
		int num = N + 1;
		for (N = N * 2 - 1; N > 1; N--) {
			if (dir == 0) for (int k = 0; k < N / 2; k++) snail[++i][j] = num++;
			else if (dir == 1) for (int k = 0; k < N / 2; k++) snail[i][--j] = num++;
			else if (dir == 2) for (int k = 0; k < N / 2; k++) snail[--i][j] = num++;
			else for (int k = 0; k < N / 2; k++) snail[i][++j] = num++;

			dir = (dir + 1) % 4;
		}

		// 출력
		for (int i = 0; i < snail.size(); i++) {
			for (int j = 0; j < snail.size(); j++)
				printf("%d ", snail[i][j]);
			cout << endl;
		}
	}
}
