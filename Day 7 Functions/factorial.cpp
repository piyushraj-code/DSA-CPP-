#include <iostream>
using namespace std;
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

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}