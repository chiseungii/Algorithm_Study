#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    vector<string> yo = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

    int x,y; cin>>x>>y;

    int day = 0;
    for(int i=1; i<x; i++) day += days[i-1];
    day += y;

    cout<<yo[(day-1)%7];
}
