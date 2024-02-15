#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> d, int budget) {
    // d를 오름차순으로 정렬
    sort(d.begin(), d.end());
    
    // 가장 적은 금액부터 지원
    int cnt = 0;
    for(int di : d){
        if(budget < di) break;
        
        cnt++;
        budget -= di;
    }
    
    return cnt;
}
