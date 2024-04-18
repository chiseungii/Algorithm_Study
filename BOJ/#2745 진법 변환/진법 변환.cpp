#include <iostream>
using namespace std;

int main() {
    string N; int B;
    cin>>N>>B;

    int answer = 0;
    for(int i=0; i<N.length(); i++) {
        if(isdigit(N[i]))
            answer = answer*B+(N[i]-'0');
        else answer = answer*B+(N[i]-'A'+10);
    }

    cout<<answer;
}
