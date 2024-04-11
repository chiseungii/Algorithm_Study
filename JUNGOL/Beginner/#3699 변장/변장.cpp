#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
	int tc; cin>>tc;
	for(int i=0; i<tc; i++){
		int n; cin>>n;

		map<string, int> cnt;
		for(int j=0; j<n; j++){
			string t,s; cin>>t>>s;
			cnt[s]++;
		}

		map<string, int>::iterator it;
		int answer = 1;
		for(it=cnt.begin(); it!=cnt.end(); it++)
			answer *= (it->second+1);

		cout<<answer-1<<endl;
	}
}
