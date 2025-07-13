#include <iostream>
using namespace std;
int main(){
    // While loop
    int count = 1;
    while (count <= 10)
    {
        cout << count << "\n";
        count ++;
    }
    // For loop
    for(int i = 1; i <= 10; i++){
        cout << i << "\n";
    }
    // Sum of n numbers
    int n;
    cout << "Enter the no of terms: ";
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum+i;
    }
    cout << sum << "\n";
    // Sum of odd numbers
    int num;
    cout << "Enter n: ";
    cin >> num;
    int oddSum = 0;
    for(int i = 1; i <= num; i++){
        if(i % 2 != 0){
            oddSum = oddSum+i;
        }
    }
    cout << oddSum << "\n";
    // Do while loop
    int a = 1;
    do
    {
        cout << a << "\n";
        a++;
    } while (a <= 10);
    // Prime or not
    int numberToCheckPrime;
    cout << "Enter the number to check it is prime or not: ";
    cin >> numberToCheckPrime;
    bool isPrime = true;
    for(int j = 2; j*j <= numberToCheckPrime; j++){
        if (numberToCheckPrime % j == 0)
        {
            isPrime = false;
            break;
        } 
    }
    if(isPrime == true){
        cout << numberToCheckPrime << " is a prime number.\n";
    }else{
        cout << numberToCheckPrime << " is not a prime number";
    }
    // Nested loops
    for(int p = 1; p < 6; p++){
        for(int r = 1; r <= 10; r++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}