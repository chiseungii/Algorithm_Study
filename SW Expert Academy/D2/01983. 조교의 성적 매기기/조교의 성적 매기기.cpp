#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2){
	return p1.second > p2.second;
}

int main(){
	int T; cin>>T;
	vector<string> grades = {"A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0"};
	for(int tc=0; tc<T; tc++){
		int N,K; cin>>N>>K;
		vector<pair<int, int>> scores;	// <index, 점수>
		
		for(int i=0; i<N; i++){
			int a,b,c; cin>>a>>b>>c;
            a = a*35/100;
            b = b*45/100;
            c = c*20/100;
			scores.push_back(make_pair(i+1, a+b+c));
		}
		
		printf("#%d ", tc+1);
		
		// 점수 내림차순으로 정렬
		sort(scores.begin(), scores.end(), compare);
		
		for(int i=0; i<scores.size(); i++){
			if(scores[i].first == K){
                int tmp = N/10;
                cout<<grades[i/tmp]<<endl;
				break;
			}
		}
	}
}
