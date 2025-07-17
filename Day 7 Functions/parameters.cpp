#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

// Function with Default parameters
int dif(int a, int b = 0){ // We can't make 1st parameter value default
    return a-b;
}

int main(){
    cout << sum(9,1) << endl;
    cout << dif(9,2);
    return 0;
}