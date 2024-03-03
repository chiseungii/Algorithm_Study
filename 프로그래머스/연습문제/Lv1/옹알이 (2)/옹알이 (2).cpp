#include <string>
#include <vector>
using namespace std;

int solution(vector<string> babbling) {
    int cnt=babbling.size(), latest=-1;
    for(string ba : babbling){
        latest = -1;
        for(int i=0; i<ba.length(); i++){
            if(ba[i]=='a' && latest!=0){
                if(i>=ba.length()-2 || ba.substr(i,3)!="aya"){
                    cnt--; break;
                }
                else {
                    i += 2;
                    latest = 0;
                }
            }
            else if(ba[i]=='y' && latest!=1){
                if(i>=ba.length()-1 || ba.substr(i,2)!="ye"){
                    cnt--; break;
                }
                else{
                    i++;
                    latest = 1;
                }
            }
            else if(ba[i]=='w' && latest!=2){
                if(i>=ba.length()-2 || ba.substr(i,3)!="woo"){
                    cnt--; break;
                }
                else{
                    i += 2;
                    latest = 2;
                }
            }
            else if(ba[i]=='m' && latest!=3){
                if(i>=ba.length()-1 || ba.substr(i,2)!="ma"){
                    cnt--; break;
                }
                else{
                    i++;
                    latest = 3;
                }
            }
            else{
                cnt--; break;
            }
        }
    }
    
    return cnt;
}
