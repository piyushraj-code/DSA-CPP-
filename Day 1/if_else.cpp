#include <iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter your age:";
    cin >> age;
    if(age >= 18){
        cout << "You can vote.\n";
    }else{
        cout << "You can't vote.\n";
    }
    // Odd or even
    int n;
    cout << "Enter a number to check whether it is even or odd: ";
    cin >> n;
    if(n % 2 == 0) {
        cout << "Even\n";
    }else {
        cout << "Odd\n";
    }
    // Grade
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if(marks >= 90){
        cout << "Grade 'A'\n";
    }else if(marks >= 80 && marks < 90){
        cout << "Grade 'B'\n";
    }else {
        cout << "Grade 'C'\n";
    }
    // Character checking
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z'){
        cout << "Lower case\n";
    }else {
        cout << "Upper case\n";
    }
    // Ternanry statement
    cout << (n >=0 ? "Non-negative":"Negative") << endl;
    return 0;
}