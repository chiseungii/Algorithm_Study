#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin>>n;
    vector<vector<int>> square;
    for(int i=0; i<n; i++){
        vector<int> v(n);
        square.push_back(v);
    }

    int num = 1;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            square[j][i] = num++;

    for(vector<int> s : square){
        for(int si : s)
            printf("%d ", si);
        cout<<endl;
    }
}
