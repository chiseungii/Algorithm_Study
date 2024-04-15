#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v(4);
    for(int i=0; i<4; cin>>v[i++]);
    v[2] -= v[0];
    v[3] -= v[1];

    cout<<*min_element(v.begin(), v.end());
}
