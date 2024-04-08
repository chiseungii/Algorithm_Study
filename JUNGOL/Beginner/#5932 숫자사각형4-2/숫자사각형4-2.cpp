#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;

    int dir = 1;
    for(int i=0; i<n; i++){
        if(dir == 1){
            for(int i=1; i<=n; printf("%d ", i++));
            cout<<endl;
        }
        else{
            for(int i=n; i>0; printf("%d ", i--));
            cout<<endl;
        }
        dir = -dir;
    }
}
