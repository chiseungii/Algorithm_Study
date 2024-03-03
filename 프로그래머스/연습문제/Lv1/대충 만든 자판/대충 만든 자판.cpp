#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> alphas(26, 101);
    for(string key : keymap){
        for(int i=0; i<key.length(); i++)
            alphas[key[i]-'A'] = min(alphas[key[i]-'A'], i+1);
    }
    
    vector<int> answer;
    for(string target : targets){
        int sum = 0;
        for(int i=0; i<target.length(); i++){
            if(alphas[target[i]-'A'] == 101){
                sum = -1;
                break;
            }
            else sum += alphas[target[i]-'A'];
        }
        answer.push_back(sum);
    }
    
    return answer;
}
