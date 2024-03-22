#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int sort_idx;

bool compare(vector<int> v1, vector<int> v2){
    return v1[sort_idx] < v2[sort_idx];
}

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    int idx;
    if(ext == "code") idx = 0;
    else if(ext == "date") idx = 1;
    else if(ext == "maximum") idx = 2;
    else idx = 3;
    
    vector<vector<int>> answer;
    for(vector<int> d : data)
        if(d[idx] < val_ext) answer.push_back(d);
    
    if(sort_by == "code") sort_idx = 0;
    else if(sort_by == "date") sort_idx = 1;
    else if(sort_by == "maximum") sort_idx = 2;
    else sort_idx = 3;
    
    sort(answer.begin(), answer.end(), compare);
    return answer;
}
