#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    while(k > 0){
        bool flag = false;
        for(int i=0; i<number.length()-1; i++){
            // 오름차순인 곳 찾기
            if(number[i] < number[i+1]){
                number.erase(number.begin()+i);
                flag = true;
                break;
            }
        }
        
        // 못 찾았으면 제일 뒤 지우기
        if(!flag) number.erase(number.begin()+number.length()-1);
        
        k--;
    }
    
    return number;
}
