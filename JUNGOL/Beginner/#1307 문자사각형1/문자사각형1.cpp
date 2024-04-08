#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin>>n;
    vector<vector<char>> square;
    for(int i=0; i<n; i++){
        vector<char> v(n);
        square.push_back(v);
    }

    char c = 'A';
    for(int i=n-1; i>=0; i--){
        for(int j=n-1; j>=0; j--){
            square[j][i] = c++;
            if(c > 'Z') c = 'A';
        }
    }

    for(vector<char> s : square){
        for(char si : s) printf("%c ", si);
        cout<<endl;
    }
}
