#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    // n을 [4, 1, 2]를 쓰는 3진법으로 변환
    // n이 3의 배수면 n-1을 변환
    string three = "";
    int tmp = n%3?n:n-1;
    int base[3] = {4, 1, 2};
    
    while(tmp){
        int a = tmp%3;
        three = to_string(base[a])+three;
        tmp /= 3;
        if(a == 0) tmp--;
    }
    
    // 3의 배수면 끝자리 2만 4로 바꾸기
    if(!(n%3)) three[three.length()-1] = '4';
    
    return three;
}
