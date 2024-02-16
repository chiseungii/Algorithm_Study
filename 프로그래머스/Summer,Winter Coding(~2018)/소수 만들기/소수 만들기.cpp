#include <vector>
#include <iostream>
#include <cmath>
#include <set>
using namespace std;

bool isPrime(int n){
    if(n == 1) return false;
    if(n == 2) return true;
    if(!(n%2)) return false;
    
    int s = sqrt(n);
    for(int i=3; i<=s; i+=2)
        if(!(n%i)) return false;
    
    return true;
}

int solution(vector<int> nums){
    int cnt = 0;
    for(int i=0; i<nums.size()-2; i++){
        for(int j=i+1; j<nums.size()-1; j++){
            for(int k=j+1; k<nums.size(); k++){
                int tmp = nums[i]+nums[j]+nums[k];
                if(isPrime(tmp)) cnt++;
            }
        }
    }
    
    return cnt;
}
