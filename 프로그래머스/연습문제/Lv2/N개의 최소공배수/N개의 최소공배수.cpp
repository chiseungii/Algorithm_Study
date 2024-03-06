#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> arr) {
    // 내림차순 정렬
    sort(arr.begin(), arr.end(), greater<int>());
    
    // 가장 큰 수의 배수 중에서 최소공배수 찾기
    for(int i=arr[0]; ; i+=arr[0]){
        bool flag = true;
        for(int j=1; j<arr.size(); j++){
            if(i%arr[j]){
                flag = false;
                break;
            }
        }
        
        if(flag) return i;
    }
}
