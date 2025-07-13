#include <iostream>
using namespace std;
bool isPowerOfTwo(int x){
    bool answer = true;
    int remainder = 0 ;
    for (int i = 2; i <= x; i = i*2){
        remainder = x%i;
        if (remainder == 1){
            answer = false;
            break;
        }
    }
    return answer;
}
int main(){
    cout << isPowerOfTwo(32) << endl;
    return 0;
}