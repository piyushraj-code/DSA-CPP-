#include <iostream>
using namespace std;
int decToBin(int n){
    int bin = 0;
    int mul = 1;
    while (n > 0)
    {
        int lastDing = n % 2;
        n = n/2;
        bin = bin + lastDing*mul;
        mul = mul * 10;
    }
    return bin;
}
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "The binary of " << n << " is: " << decToBin(n) << endl;
    return 0;
}