#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> prices(5);
    for(int i=0; i<5; cin>>prices[i++]);

    cout<<min(min(prices[0], prices[1]), prices[2])+min(prices[3], prices[4])-50;
}
