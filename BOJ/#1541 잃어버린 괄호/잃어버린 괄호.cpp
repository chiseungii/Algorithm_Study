#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s; cin>>s;

    vector<int> nums;
    vector<char> ops;

    int idx = 0;
    for(int i=0; i<s.length(); i++) {
        if(!isdigit(s[i])) {
            nums.push_back(stoi(s.substr(idx, i-idx)));
            idx = i+1;

            ops.push_back(s[i]);
        }
    }
    nums.push_back(stoi(s.substr(idx)));

    int answer = nums[0];
    for(int i=0; i<ops.size(); i++) {
        // +면 그냥 더하기
        if(ops[i] == '+') answer += nums[i+1];
        // -면 다음 -까지 다 더한 후 빼기
        else {
            int tmp = nums[i+1];
            for(int j=i+1; j<ops.size(); j++) {
                if(ops[j] == '+') tmp += nums[j+1];
                else {
                    answer -= tmp;
                    tmp = -1;
                    i = j-1;
                    break;
                }
            }

            if(tmp != -1) {
                answer -= tmp;
                break;
            }
        }
    }

    cout<<answer;
}
