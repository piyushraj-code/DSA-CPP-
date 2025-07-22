#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;
    cout << ptr << endl;
    int z = *(ptr);
    cout << z << endl;
    return 0;
}