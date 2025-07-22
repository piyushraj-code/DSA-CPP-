#include <iostream>
using namespace std;
int main(){
    // Pointers are special type of variable which stores the address of other varibale
    int a = 10;
    cout << &a << endl;
    int*ptr = &a;
    cout << ptr << endl;
    int**z = &ptr; // Double pointer declaration
    cout << z << endl;

    float PI = 3.14;
    float *p = &PI;
    cout << p << endl;
    cout << sizeof(ptr) << endl;
    return 0;
}