#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> matrix_sizes) {
    vector<vector<int>> DP; // DP[i][j]: i~j번째 행렬의 곱셈 최솟값
    for(int i=0; i<matrix_sizes.size(); i++){
        vector<int> v(matrix_sizes.size(), 0);
        DP.push_back(v);
    }
    
    for(int n=1; n<matrix_sizes.size(); n++){  // n: 곱하는 행렬 개수
        for(int i=0; i<matrix_sizes.size()-n; i++){    // DP[i][i+n] 값 계산
            for(int j=i; j<i+n; j++){
                int tmp = DP[i][j]+DP[j+1][i+n];
                tmp += matrix_sizes[i][0]*matrix_sizes[j][1]*matrix_sizes[i+n][1];
                
                if(DP[i][i+n]==0 || tmp<DP[i][i+n])
                    DP[i][i+n] = tmp;
            }
        }
    }
    
    return DP[0][matrix_sizes.size()-1];
}
