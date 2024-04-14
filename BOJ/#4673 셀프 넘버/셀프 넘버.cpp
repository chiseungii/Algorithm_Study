#include <iostream>
#include <vector>
using namespace std;

#define SIZE 10001

int main() {
    vector<bool> isSelf(SIZE, true);

    for(int i=1; i<SIZE; i++) {
        int sum=0, n=i;
        while(n) {
            sum += n%10;
            n /= 10;
        }
        sum += i;

        if(sum < SIZE) isSelf[sum] = false;
    }

    for(int i=1; i<SIZE; i++)
        if(isSelf[i]) printf("%d\n", i);
}
