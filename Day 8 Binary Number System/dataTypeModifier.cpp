#include <iostream>
using namespace std;
int main(){
    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;
    cout << sizeof(long long int) << endl;
    cout << sizeof(short int) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(long double) << endl;
    // Unsigned modifire is used when we have to store only positive values
    unsigned int age = 22;

    // cout << sizeof(short double) << endl; Not a vlaid dataype

    return 0;
}