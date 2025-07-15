#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    int reversedNumber = 0;
    for(int i = n; i > 0; i = i/10){
        int lastdigit = i % 10;
        reversedNumber = reversedNumber*10 + lastdigit;
    }
    cout << reversedNumber << endl;
    return 0;
}