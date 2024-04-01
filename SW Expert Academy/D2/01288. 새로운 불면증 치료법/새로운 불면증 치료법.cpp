#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T; cin >> T;
	for (int tc = 0; tc < T; tc++) {
		printf("#%d ", tc + 1);

		int N, num; cin >> N; num = N;
		vector<bool> count(10, false);
		while (1) {
			int tmp = N;
			while (tmp) {
				count[tmp % 10] = true;
				tmp /= 10;
			}

			bool flag = true;
			for (int i = 0; i < 10; i++) {
				if (!count[i]) {
					flag = false;
					break;
				}
			}

			if (flag) {
				printf("%d\n", N);
				break;
			}
			else N += num;
		}
	}
}
