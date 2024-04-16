#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    while(1) {
        int a,b,c; cin>>a>>b>>c;
        if(!a && !b && !c) break;

        vector<int> sides = {a, b, c};
        sort(sides.begin(), sides.end());

        if(sides[2]*sides[2] == sides[0]*sides[0]+sides[1]*sides[1])
            cout<<"right\n";
        else cout<<"wrong\n";
    }
}
