#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    while(1) {
        int k; cin>>k;
        if(k == 0) break;

        vector<int> nums(k);
        for(int i=0; i<k; cin>>nums[i++]);

        vector<bool> cmb(k, false);
        for(int i=0; i<6; i++) cmb[i] = true;

        vector<bool> v = cmb;
        while(1) {
            for(int i=0; i<k; i++)
                if(v[i]) printf("%d ", nums[i]);
            cout<<'\n';

            prev_permutation(v.begin(), v.end());
            if(v == cmb) break;
        }
        cout<<'\n';
    }
}
