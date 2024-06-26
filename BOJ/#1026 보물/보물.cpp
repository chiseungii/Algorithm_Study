#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N; cin>>N;
    vector<int> A(N), B(N);

    for(int i=0; i<N; cin>>A[i++]);
    for(int i=0; i<N; cin>>B[i++]);

    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>());

    int sum = 0;
    for(int i=0; i<N; i++)
        sum += A[i]*B[i];

    cout<<sum;
}
