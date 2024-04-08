#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N; cin>>N;
    vector<vector<char>> tri;
    for(int i=0; i<N; i++){
        vector<char> v(N, ' ');
        tri.push_back(v);
    }

    char c = 'A';
    for(int i=0; i<N; i++){
        for(int j=1; j<=N-i; j++){
            tri[i+j-1][N-j] = c++;
            if(c > 'Z') c = 'A';
        }
    }

    for(vector<char> t : tri){
        for(char ti : t) printf("%c ", ti);
        cout<<endl;
    }
}
