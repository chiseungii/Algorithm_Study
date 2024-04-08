#include <iostream>
using namespace std;

int main(){
    int s,e; cin>>s>>e;

    if(s < e){
        for(int i=s; i<=e; i++){
            for(int j=1; j<=9; j++){
                printf("%d * %d = %2d   ", i, j, i*j);
                if(!(j%3)) cout<<endl;
            }
            cout<<endl;
        }
    }
    else{
        for(int i=s; i>=e; i--){
            for(int j=1; j<=9; j++){
                printf("%d * %d = %2d   ", i, j, i*j);
                if(!(j%3)) cout<<endl;
            }
            cout<<endl;
        }
    }
}
