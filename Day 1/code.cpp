#include <iostream>
using namespace std;
int main(){

    cout <<"Piyush\nRaj\n";
    int age = 18;
    cout <<sizeof(age) << endl;

    // Type casting
    char grade = 'A';
    int a = grade;
    cout << a << endl;
    
    // User input
    cout <<"Enter your age: ";
    cin >> age;

    // Sum of two numbers
    int num1, num2;
    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    int sum = num1+num2;
    cout << "The sum of "<<num1<<" and "<<num2<<" is "<<sum<<"." << endl;

    return 0;
}