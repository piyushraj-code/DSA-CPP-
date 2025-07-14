#include <iostream>
using namespace std;
int main(){
    double salary;
    double tax;
    cout << "Enter your income in LPA: ";
    cin >> salary;
    if(salary < 5){
        cout << "You don't have to pay any tax.";
    }
    else if(salary <= 10){
        cout << "You have to pay 20% tax." << endl;
        tax = 20*salary/100;
        cout << "Your tax amount is: " << tax*100000 << endl;
    }
    else{
        cout << "You have to pay 30% tax." << endl;
        tax = 30*salary/100;
        cout << "Your tax amount is: " << tax*100000 << endl;
    }
    return 0;
}