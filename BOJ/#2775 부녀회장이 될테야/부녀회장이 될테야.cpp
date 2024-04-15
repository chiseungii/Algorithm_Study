#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> people;
    for(int i=0; i<15; i++) {
        vector<int> v(15, 0);
        people.push_back(v);
    }

    for(int i=1; i<15; i++)
        people[0][i] = i;

    for(int i=1; i<15; i++) {
        for(int j=1; j<15; j++) {
            for(int k=1; k<=j; k++)
                people[i][j] += people[i-1][k];
        }
    }

    int T; cin>>T;
    for(int tc=0; tc<T; tc++) {
        int k,n; cin>>k>>n;
        cout<<people[k][n]<<endl;
    }
}
