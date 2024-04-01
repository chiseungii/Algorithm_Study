#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T; cin >> T;
	for (int tc = 0; tc < T; tc++) {
		int N; cin >> N;
		vector<int> pos(N);
		for (int i = 0; i < N; i++) {
			int n; cin >> n;
			if (n < 0) pos[i] = -n;
			else pos[i] = n;
		}

		printf("#%d ", tc + 1);

		sort(pos.begin(), pos.end());
		bool flag = false;
		for (int i = 1; i < pos.size(); i++) {
			if (pos[i] != pos[0]) {
				flag = true;
				printf("%d %d\n", pos[0], i);
				break;
			}
		}

		if (!flag) printf("%d %d\n", pos[0], N);
	}
}
