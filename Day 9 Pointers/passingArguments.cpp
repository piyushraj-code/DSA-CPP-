#include <iostream>
using namespace std;
// Pass By Value
void changeA(int a){
    a = 20;
    cout << a << endl;
}

// Pass By Pointer(refrence)
void changeB(int *ptr){
    *ptr = 100;
    cout << *ptr << endl;
}
int main(){
    int a = 10;
    changeA(a);
    cout << a << endl;
    

    int b = 1;
    changeB(&b);
    cout << b << endl;
    return 0;
}