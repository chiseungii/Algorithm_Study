#include <iostream>

using namespace std;

int main() {
	// 앞에서부터 K개씩 묶어서 판매
	// 크림이 없는 빵(0)이 P개 미만이어야 카운팅
	int N,K,P; cin>>N>>K>>P;

	int cnt = 0;
	for(int i=0; i<N; i++){
		int noCream = 0;
		for(int j=0; j<K; j++){
			int a; cin>>a;
			if(a == 0) noCream++;
		}

		if(noCream >= P) cnt++;
	}

	cout<<N-cnt<<endl;
}
