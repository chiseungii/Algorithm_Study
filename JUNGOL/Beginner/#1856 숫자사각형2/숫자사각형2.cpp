#include <iostream>
using namespace std;

int main(){
    int n,m; cin>>n>>m;

    int num=1, dir=1;
    for(int i=0; i<n; i++){
        if(dir == 1){
            for(int j=0; j<m; j++)
                printf("%d ", num++);
            cout<<endl;
            dir = -dir;
        }
        else{
            for(int j=num+m-1; j>=num; j--)
                printf("%d ", j);
            cout<<endl;
            num += m;
            dir = -dir;
        }
    }
}
