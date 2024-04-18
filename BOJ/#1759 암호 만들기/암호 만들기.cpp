#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int L,C; cin>>L>>C;
    vector<char> words(C);
    for(int i=0; i<C; cin>>words[i++]);
    sort(words.begin(), words.end());

    vector<bool> cmb(C, false);
    for(int i=0; i<L; i++) cmb[i] = true;

    vector<string> passwords;
    vector<bool> v = cmb;
    while(1) {
        string s = "";
        int cntJ=0, cntM=0; // 자음, 모음 개수
        for(int i=0; i<C; i++) {
            if(v[i]) {
                s += words[i];

                if(words[i]=='a' || words[i]=='e' || words[i]=='i' || words[i]=='o' || words[i]=='u')
                    cntM++;
                else cntJ++;
            }
        }
        if(cntM>=1 && cntJ>=2) passwords.push_back(s);

        next_permutation(v.begin(), v.end());
        if(v == cmb) break;
    }
    sort(passwords.begin(), passwords.end());

    for(string pw : passwords) cout<<pw<<endl;
}
