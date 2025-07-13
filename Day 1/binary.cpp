#include <iostream>
using namespace std;
// Decimal to binary
int decimalToBinary(int decimal){
    int binary = 0;
    int i = 1;
    while (decimal > 0){
        int remainder = decimal%2;
        binary = binary + remainder*i;
        i = i*10;
        decimal = decimal/2;
    }
    return binary;
}
// Binary to decimal
int binaryToDecimal(int bin){
    int dec = 0;
    int remainder = 0;
    int i = 1;
    while(bin > 0){
        remainder = bin %10;
        bin = bin/10;
        dec = dec + remainder*i;
        i = i*2;
    }
    return dec;
}
int main(){
    cout << decimalToBinary(6) << endl;
    cout << binaryToDecimal(decimalToBinary(6)) << endl;
    return 0;
}