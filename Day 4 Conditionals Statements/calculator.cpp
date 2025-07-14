#include <iostream>
using namespace std;
int main()
{
    cout << "This is a simple calculator program." << endl;
    float a, b;
    char oper;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    cout << "Enter operator(+,-,x,/): ";
    cin >> oper;
    if (oper == '+')
    {
        cout << "The sum of " << a << " and " << b << " is: " << a + b << endl;
    }
    else if (oper == '-')
    {
        cout << "The substraction of " << a << " and " << b << " is: " << a - b << endl;
    }
    else if (oper == '*' || oper == 'x' || oper == 'X')
    {
        cout << "The multiplication of " << a << " and " << b << " is: " << a * b << endl;
    }
    else if (oper == '/')
    {
        cout << "The div of " << a << " and " << b << " is: " << a / b << endl;
    }
    else
    {
        cout << "Enter valid operator." << endl;
    }
    return 0;
}