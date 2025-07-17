#include <iostream>
using namespace std;
bool checkOdd(int n){
    bool isodd = true;
    if(n % 2 == 0){
        isodd = false;
    }
    return isodd;
}
int main(){
    cout << (checkOdd(8) ? "Odd" : "Even") << endl;;
    return 0;
}