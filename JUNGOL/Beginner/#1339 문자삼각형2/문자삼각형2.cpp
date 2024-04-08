#include <iostream>
#include <vector>
using namespace std;

int main(){
    int i,j;

    int n; cin>>n;
    if(n<1 || n>100 || !(n%2)){
        cout<<"INPUT ERROR\n";
        return 0;
    }

    vector<vector<char>> tri;
    vector<char> v(n/2+1, ' ');
    for(i=0; i<n; i++)
        tri.push_back(v);

    char c = 'A';
    int a=n/2, b=1;
    for(i=0; i<(n+1)/2; i++){
        for(j=a; j<a+b; j++){
            tri[j][n/2-i] = c++;
            if(c > 'Z') c = 'A';
        }

        a--; b+=2;
    }

    for(vector<char> t : tri){
        for(char ti : t) printf("%c ", ti);
        printf("\n");
    }
}
