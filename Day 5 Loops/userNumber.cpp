#include <iostream>
using namespace std;
int main(){
    int userInput;
    do{
        cout << "Enter the number: ";
        cin >> userInput;
       
    }while(userInput % 10 != 0);
    return 0;
}