#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T; cin >> T;
	for (int tc = 0; tc < T; tc++) {
		int N, K; cin >> N >> K;
		vector<vector<int>> puzzle;
		for (int i = 0; i < N; i++) {
			vector<int> v(N);
			for (int j = 0; j < N; cin >> v[j++]);
			puzzle.push_back(v);
		}

		printf("#%d ", tc + 1);

		int cnt = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				// 흰 부분이면 가로, 세로로 K칸인지 확인
				if (puzzle[i][j] == 1) {
					// 가로, 세로 칸 수 확인
					// 가로
					// 왼쪽에 흰 칸이 또 있으면 패스
					int horizon = 0;
					if (j == 0 || puzzle[i][j-1] == 0) {
						for (int k = j; k < N; k++) {
							if (puzzle[i][k] == 1) horizon++;
							else break;
						}
					}

					// 세로
					// 위에 흰 칸이 또 있으면 패스
					int vertical = 0;
					if (i == 0 || puzzle[i-1][j] == 0) {
						for (int k = i; k < N; k++) {
							if (puzzle[k][j] == 1) vertical++;
							else break;
						}
					}

					if (horizon == K) cnt++;
					if (vertical == K) cnt++;
				}
			}
		}

		printf("%d\n", cnt);
	}
}
