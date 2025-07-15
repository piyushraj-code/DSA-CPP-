#include <iostream>
using namespace std;
int main(){
    bool isPrime = true;
    int n;
    cout << "Enter the number: ";
    cin >> n;
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
    cout << (isPrime ? "Prime" : "Not Prime") << endl;
    return 0;
}