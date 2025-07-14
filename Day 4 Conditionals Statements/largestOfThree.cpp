#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;
    cout << "Enter 3rd number: ";
    cin >> num3;
    if (num1 > num2 && num1 > num3){
        cout << num1 << " is largest." << endl;
    }
    else if(num2 > num3){
        cout << num2 << " is largest." << endl;
    }
    else{
        cout << num3 << " is largset." << endl;
    }
    return 0;
}