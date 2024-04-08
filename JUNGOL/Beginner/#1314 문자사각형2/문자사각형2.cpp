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

    int dir = 1;
    char c = 'A';
    for(int i=0; i<n; i++){
        if(dir == 1){
            for(int j=0; j<n; j++){
                square[j][i] = c++;
                if(c > 'Z') c = 'A';
            }
        }
        else{
            for(int j=n-1; j>=0; j--){
                square[j][i] = c++;
                if(c > 'Z') c = 'A';
            }
        }

        dir = -dir;
    }

    for(vector<char> s : square){
        for(char si : s) printf("%c ", si);
        cout<<endl;
    }
}
