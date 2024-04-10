#include <iostream>
using namespace std;

int main() {
	int n; cin>>n;

	if(n<1 || n>50 || !(n%2)) cout<<"INPUT ERROR!\n";
	else{
		int num=1, dir=1;
		for(int i=1; i<=n; i++){
			if(dir == 1){
				for(int j=0; j<i; j++) printf("%d ", num++);
				cout<<endl;
			}
			else{
				for(int j=num+i-1; j>=num; printf("%d ", j--));
				num += i;
				cout<<endl;
			}

            dir = -dir;
		}
	}
}
