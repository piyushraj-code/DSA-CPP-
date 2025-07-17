#include <iostream>
using namespace std;
int factorial(int n){
    int product = 1;
    for(int i = 1; i <= n; i++){
        product *= i;
    }
    return product;
}

int main(){
    cout << factorial(4) << endl;
    return 0;
}