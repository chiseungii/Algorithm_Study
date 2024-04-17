#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int N; cin>>N;

    int sum=0, max_cnt=0;
    vector<int> nums;
    map<int, int> m;    // <숫자, 개수>
    for(int i=0; i<N; i++) {
        int a; cin>>a;
        sum += a;
        nums.push_back(a);

        m[a]++;
        if(m[a] > max_cnt) max_cnt = m[a];
    }
    sort(nums.begin(), nums.end());

    // 산술평균
    double avg = (double)sum/(double)N;
    if(avg < 0) avg -= 0.5;
    else avg += 0.5;
    printf("%d\n", (int)avg);
    cout<<nums[N/2]<<endl;

    map<int, int>::iterator it;
    int max_num = 5000;
    for(it=m.begin(); it!=m.end(); it++) {
        if(it->second == max_cnt) {
            if(max_num == 5000) max_num = it->first;
            else {
                cout<<it->first<<endl;
                max_num = -1;
                break;
            }
        }
    }
    if(max_num != -1) cout<<max_num<<endl;

    cout<<nums[N-1]-nums[0]<<endl;
}
