#include <iostream>
using namespace std;
int product(int a, int b=1){
    return a*b;
}
int main(){
    cout << "Product = " << product(5,2) << endl;
    cout << "Product = " << product(5) << endl;
    return 0;
}