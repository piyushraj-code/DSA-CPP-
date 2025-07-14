#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    bool isAdult = (age >= 18) ? true : false;
    cout << isAdult << endl;

    // Largest of two Numbers
    int a, b;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    int largest = (a>b) ? a : b;
    cout << "Largest is: " << largest << endl;
    return 0;
}