#include <iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 10; i++){
        if(i == 5){
            break; // Ends the loop
        }
        cout << i << endl;
    }
    return 0;
}