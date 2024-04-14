#include <iostream>
using namespace std;

int main() {
    int N; cin>>N;

    int fact = 1;
    for(int i=2; i<=N; fact*=i++);

    cout<<fact;
}
