#include <vector>
#include <string>
#include <cstring>
using namespace std;

int solution(vector<string> arr){
    vector<int> nums;   // 숫자들 저장
    vector<char> ops;   // 연산기호 저장
    for(int i=0; i<arr.size(); i++){
        if(isdigit(arr[i][0])) nums.push_back(stoi(arr[i]));
        else ops.push_back(arr[i][0]);
    }
    
    vector<vector<int>> min_DP, max_DP;
    for(int i=0; i<nums.size(); i++){
        vector<int> v(nums.size(), 0);
        min_DP.push_back(v);
        max_DP.push_back(v);
    }
    
    // [i][i]번째 숫자
    for(int i=0; i<nums.size(); i++)
        min_DP[i][i] = max_DP[i][i] = nums[i];
    
    // DP 계산
    for(int i=1; i<nums.size(); i++){  // (i+1)개씩 계산
        for(int j=0; j<nums.size()-i; j++){   // DP[j][j+i] 계산
            int max_num=-1010001, min_num=1010001;
            for(int k=j; k<j+i; k++){
                // 최댓값 계산
                int tmp;
                if(ops[k] == '+')
                    tmp = max_DP[j][k]+max_DP[k+1][j+i];
                else
                    tmp = max_DP[j][k]-min_DP[k+1][j+i];                
                if(tmp > max_num) max_num = tmp;
                
                // 최솟값 계산
                if(ops[k] == '+')
                    tmp = min_DP[j][k]+min_DP[k+1][j+i];
                else
                    tmp = min_DP[j][k]-max_DP[k+1][j+i];
                if(tmp < min_num) min_num = tmp;
            }
            
            max_DP[j][j+i] = max_num;
            min_DP[j][j+i] = min_num;
        }
    }
    
    return max_DP[0][nums.size()-1];
}
