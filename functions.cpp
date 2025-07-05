#include <iostream>
#include <string>
using namespace std;

// Function Definition
void printHello() {
    cout << "Hello\n";
}
// SUM OF TWO NUMERS
int sum(int a, int b){
    return a+b;
}
// Minimum of two numbers
int min(int a, int b){
    if (a > b){
        return b;
    }
    else{
        return a;
    }
}
// Sum of first n numbers
int sumN(int n){
    return n*(n+1)/2;
}
// N factorial
int factorial(int n){
    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial = factorial*i;
    }
    return factorial;
}
// Sum of digits
int digitSum(int num){
    int sum = 0;
    while(num > 0){
        int lastDigit = num % 10;
        num = num/10;
        sum = sum + lastDigit;
    }
    return sum;
}
// Binomial coefficient
int binomialCoefficient(int n, int r){
    if(n < r){
        cout << "n should not be less than r" << endl;
        return 0;
    }
    else{
        int nFactorial = factorial(n);
    int rFactorial = factorial(r);
    int nRFactorial = factorial(n-r);
    int binomialCoefficient = (nFactorial)/(rFactorial*nRFactorial);
    return binomialCoefficient;
    }
}
int main(){
    // Function call
    printHello();
    cout << sum(10,90) << endl;
    cout << min(90,100) << endl;
    cout << sumN(5) << endl;
    cout << factorial(5) << endl;
    cout << digitSum(54974) << endl;
    cout << binomialCoefficient(8,7) << endl;
    return 0;
}