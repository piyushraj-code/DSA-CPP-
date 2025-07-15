#include <iostream>
using namespace std;
int main(){
    // Using loop
    int n;
    cout << "Enter n: ";
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; i++){
        sum = sum + i;
    }
    cout << "The sum of first " << n << " natural number is " << sum << endl;

    // Using math
    int sumMath = n*(n+1)/2;
    return 0;
}