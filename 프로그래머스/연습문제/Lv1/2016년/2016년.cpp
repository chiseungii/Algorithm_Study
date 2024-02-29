#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    int days[11] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    string answer[7] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    
    int cnt = 0;
    for(int i=0; i<a-1; cnt+=days[i++]);
    cnt = cnt+b-1;
    
    return answer[cnt%7];
}
