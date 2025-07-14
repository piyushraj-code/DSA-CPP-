#include <iostream>
using namespace std;
int main()
{
    // Largest of two numbers
    int firstNum;
    int secondNum;
    cout << "Enter the first number: ";
    cin >> firstNum;
    cout << "Enter tht second number: ";
    cin >> secondNum;
    if (firstNum == secondNum)
    {
        cout << "Both the numbers are equal." << endl;
    }
    else if (firstNum > secondNum)
    {
        cout << "The gratest number is: " << firstNum << endl;
    }
    else
    {
        cout << "The greatest number is: " << secondNum << endl;
    }

    // Even or odd
    int number;
    cout << "Enter the number to check odd or ever: ";
    cin >> number;
    if(number%2 == 0){
        cout << number << " is even." << endl;
    }
    else{
        cout << number << " is odd." << endl;
    }
    return 0;
}