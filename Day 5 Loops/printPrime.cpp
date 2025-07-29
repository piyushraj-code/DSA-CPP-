#include <iostream>
using namespace std;
bool checkPrime(int n){
    bool isPrime = true;
    for(int i = 2; i*i <= n; i++){
        if(n <= 1){
            isPrime = true;
        }
        else{
            if (n % i == 0){
                isPrime = false;
                break;
            }
        }
    }
}
int main(){
    for(int i = 2; i <= 100; i++){
        if(checkPrime(i)){
            cout << i << endl;
        }
    }
    return 0;
}