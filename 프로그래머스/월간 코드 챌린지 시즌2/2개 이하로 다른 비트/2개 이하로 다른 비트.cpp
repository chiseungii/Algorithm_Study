#include <string>
#include <vector>

using namespace std;

vector<long long> solution(vector<long long> numbers) {
    vector<long long> answer;
    for(long long number : numbers){
        // 짝수면 가장 맨 끝 비트 0을 1로 바꾸면 된다
        // -> +1한 숫자
        if(!(number%2)) answer.push_back(number+1);
        // 홀수면 가장 맨 끝 비트 1을 0으로 바꾼 후
        // 그 다음 가장 먼저 오는 0을 1로 바꾼다
        else{
            // 비트로 교환
            string str = "";
            while(number > 0){
                str += ((number%2)+'0');
                number /= 2;
            }
            str += "0";
            
            // 비트 바꾸기
            for (int i = 0; i < str.length(); i++) {
                if (str[i] == '0') {
                    str[i] = '1';
                    str[i - 1] = '0';
                    break;
                }
            }

            // 다시 숫자로 교환
            long long n = 0;
            for (int i = str.length() - 1; i >= 0; i--)
                n = n * 2 + (str[i] - '0');

            answer.push_back(n);
        }
    }
    
    return answer;
}
