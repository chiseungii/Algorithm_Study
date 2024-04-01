#include <iostream>
#include <vector>
using namespace std;

int main(){
	int T; cin>>T;
	for(int tc=0; tc<T; tc++){
		int N; cin>>N;
		
		printf("#%d ", tc+1);
		
		int speed=0, len=0;	// 속도, 거리
		for(int i=0; i<N; i++){
			int cmd; cin>>cmd;
			
			if(cmd == 0) len += speed;
			else{
				int n; cin>>n;
				if(cmd == 1){
					speed += n;
					len += speed;
				}
				else{
					speed -= n;
					if(speed < 0) speed = 0;
					len += speed;
				}
			}
		}
		
		printf("%d\n", len);
	}
}
