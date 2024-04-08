#include <iostream>
using namespace std;

int main(){
	int s,e; cin>>s>>e;
    while(s<2 || s>9 || e<2 || e>9){
        cout<<"INPUT ERROR!\n";
        cin>>s>>e;
    }

    for(int i=1; i<=9; i++){
        if(s < e){
            for(int j=s; j<=e; j++)
                printf("%d * %d = %2d   ", j, i, j*i);
            cout<<endl;
        }
        else{
            for(int j=s; j>=e; j--)
                printf("%d * %d = %2d   ", j, i, j*i);
            cout<<endl;
        }
    }
}
