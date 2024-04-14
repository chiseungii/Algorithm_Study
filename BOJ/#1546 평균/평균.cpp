#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N; cin>>N;
    vector<int> scores(N);
    for(int i=0; i<N; cin>>scores[i++]);
    sort(scores.begin(), scores.end(), greater<int>());

    double max_score = (double)scores[0];
    double sum = 100.0;
    for(int i=1; i<N; i++)
        sum += (double)scores[i]/max_score*100.;

    cout<<sum/(double)N;
}
