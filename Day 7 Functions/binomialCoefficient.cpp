#include <iostream>
using namespace std;
// Factorial Calculation
int factorial(int n){
    int product = 1;
    if(n < 0){
        cout << "Invalid argument!!" << endl;
        cout << "Enter valid non negative integer: ";
        cin >> n;
        return factorial(n);
    }
    else if(n == 0){
        return product;
    }
    else{
        for(int i = 1; i <= n; i++){
        product *= i;
    }
    }
    return product;
}
int binomialCoefficient(int n, int r){
    int binoCoef;
    if(n < r){
        cout << "Enter valid r: ";
        cin >> r;
        return binomialCoefficient(n , r);
    }
    else{
        binoCoef = factorial(n)/(factorial(r)*factorial(n-r));
    }
    return binoCoef;
}

int main(){
    int n , r;
    cout << "Enter n: ";
    cin >> n;
    cout << endl;
    cout << "Enter r: ";
    cin >> r;
    cout << binomialCoefficient(n , r) << endl;
    return 0;
}