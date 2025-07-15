#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    int sum = 0;

    // Using for loop
    // for(int i = n; i > 0; i = i/10){
    //     int remainder = i % 10;
    //     if(remainder % 2 != 0){
    //         sum = sum+remainder;
    //     }
    // }

    // Using while loop
    int i = n;
    while (i > 0){
        int remainder  = i % 10;
        if(remainder % 2 != 0){
            sum = sum + remainder;
        } 
        i = i/10;
    }
    cout << "The sum of odd digits of " << n << " is " << sum <<endl;
    return 0;
}