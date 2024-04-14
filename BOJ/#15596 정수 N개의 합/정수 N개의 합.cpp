#include <vector>
long long sum(std::vector<int> &a) {
	long long answer = 0;
    for(int ai : a) answer += ai;

    return answer;
}
