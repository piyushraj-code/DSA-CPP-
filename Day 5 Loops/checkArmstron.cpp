#include <iostream>
using namespace std;
int main(){
    // Armstrong is a number which is equal to the sum of cubes of it's digit
    int n;
    cout << "Enter n: ";
    cin >> n;
    int cubeSum = 0;
    for(int i = n; i > 0; i = i/10){
        int lastDig = i % 10;
        cubeSum = cubeSum + lastDig*lastDig*lastDig;
    }
    if(cubeSum == n){
        cout << "The number " << n << " is an ARMSTRONG number.";
    }
    else{
        cout << "The number " << n << " is not an ARMSTRON number.";
    }
    return 0;
}