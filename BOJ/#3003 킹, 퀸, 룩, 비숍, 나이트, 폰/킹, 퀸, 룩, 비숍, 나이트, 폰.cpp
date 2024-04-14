#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> right = {1, 1, 2, 2, 2, 8};
    vector<int> cnt(6, 0);
    for(int i=0; i<6; cin>>cnt[i++]);

    for(int i=0; i<6; i++)
        printf("%d ", right[i]-cnt[i]);
}
