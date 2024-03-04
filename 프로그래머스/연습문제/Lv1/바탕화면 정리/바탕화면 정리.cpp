#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    int start_i=52, start_j=52, end_i=0, end_j=0;
    for(int i=0; i<wallpaper.size(); i++){
        for(int j=0; j<wallpaper[0].size(); j++){
            if(wallpaper[i][j] == '#'){
                if(i < start_i) start_i = i;
                if(j < start_j) start_j = j;
                if(i > end_i) end_i = i;
                if(j > end_j) end_j = j;
            }
        }
    }
    
    return {start_i, start_j, end_i+1, end_j+1};
}
