#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N,M; cin>>N>>M;
    vector<vector<int>> matrix;
    for(int i=0; i<N; i++) {
        vector<int> v(M, 0);
        matrix.push_back(v);
    }

    for(int i=0; i<2; i++) {
        for(int j=0; j<N; j++) {
            for(int k=0; k<M; k++) {
                int a; cin>>a;
                matrix[j][k] += a;
            }
        }
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++)
            printf("%d ", matrix[i][j]);
        cout<<endl;
    }
}
