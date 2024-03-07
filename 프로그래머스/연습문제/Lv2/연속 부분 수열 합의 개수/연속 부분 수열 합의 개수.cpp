#include <string>
#include <vector>
#include <set>
using namespace std;

int solution(vector<int> elements) {
    // 수열 두 배로 붙여넣기
    vector<int> twice_ele = elements;
    for(int e : elements) twice_ele.push_back(e);
    
    set<int> nums;
    for(int i=1; i<=elements.size(); i++){
        for(int j=0; j<elements.size(); j++){
            int sum = 0;
            for(int k=j; k<j+i; sum+=twice_ele[k++]);
            nums.insert(sum);
        }
    }
    
    return nums.size();
}
