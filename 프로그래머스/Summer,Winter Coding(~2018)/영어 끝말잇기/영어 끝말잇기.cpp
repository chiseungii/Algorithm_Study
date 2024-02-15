#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <iostream>
using namespace std;

vector<int> solution(int n, vector<string> words){
    int turn=1, cycle=1;    // 현재 순서, 현재 라운드
    string last = words[0]; // 바로 전 단어
    map<string, bool> visit;    // 불렀던 단어 체크용
    visit[words[0]] =true;
    
    for(int i=1; i<words.size(); i++){
        // 앞사람이 말한 단어와 끝말잇기가 되는지
        if(last[last.length()-1] != words[i][0]){
            return {turn+1, cycle};
        }
        // 이전에 등장했던 단어인지
        else if(visit[words[i]]) return {turn+1, cycle};
        // 한 글자인지
        else if(words[i].length() == 1) return {turn+1, cycle};
        // 제대로 불렀으면 이어가기
        else{
            turn++;
            last = words[i];
            visit[words[i]] = true;
            
            if(turn == n){
                turn = 0;
                cycle++;
            }
        }
    }
    
    return {0, 0};
}
