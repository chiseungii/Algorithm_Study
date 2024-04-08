#include <iostream>
using namespace std;

int main(){
    int n,m; cin>>n>>m;

    for(int i=1; i<=n*m; i++){
        printf("%d ", i);
        if(!(i%m)) cout<<endl;
    }
}
