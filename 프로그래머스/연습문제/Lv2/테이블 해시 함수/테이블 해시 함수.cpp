#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int column;

bool compare(vector<int> v1, vector<int> v2){
    if(v1[column] == v2[column]) return v1[0] > v2[0];
    else return v1[column] < v2[column];
}

int solution(vector<vector<int>> data, int col, int row_begin, int row_end) {
    column = col-1;   // 정렬 위해서 전역변수로
    sort(data.begin(), data.end(), compare);
    
    int answer = 0;
    for(int i=row_begin-1; i<row_end; i++){
        int sum = 0;
        for(int j=0; j<data[i].size(); j++)
            sum += (data[i][j]%(i+1));
        
        answer ^= sum;
    }
    
    return answer;
}
