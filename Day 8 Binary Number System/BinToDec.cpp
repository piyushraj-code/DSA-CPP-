#include <iostream>
using namespace std;
int binToDec(int bin){
    int power = 1;
    int number = 0;
    while (bin > 0)
    {
        int lastDig = bin % 10;
        bin = bin/10;
        number = number + lastDig*power;
        power *= 2;
    }
    return number;
}
int main(){
    int bin;
    cout << "Enter the binary number: ";
    cin >> bin;
    cout << "The decimal value of " << bin << " is: " << binToDec(bin) << endl;
    return 0;
}