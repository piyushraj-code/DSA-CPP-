#include <iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 10; i++){
        if(i == 5){
            continue;// Used to skip the specific value
        }
        cout << i << endl;
    }
    return 0;
}