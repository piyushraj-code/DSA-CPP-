#include <iostream>
using namespace std;
int main()
{
    cout << (10 / 3) << endl; // This will give and integer 3
    cout << (10 / 3.0) << endl;
    // Typecasting Hirerchy
    // bool -> char -> int -> float -> double
    cout << ('A' + 1) << endl; // In c++ characters are stored as number (Ascii character)
    return 0;
}