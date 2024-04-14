#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A,B; cin>>A>>B;
    int reverseA=0, reverseB=0;

    for(int i=0; i<3; i++) {
        reverseA = reverseA*10+A%10;
        reverseB = reverseB*10+B%10;
        A/=10; B/=10;
    }

    cout<<max(reverseA, reverseB);
}
