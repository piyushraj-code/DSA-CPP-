#include <iostream>
using namespace std;
int main(){
    int arr[24];
    int arr2[] = {1,2,3};
    int arr3[22] = {1,2,3};
    cout << sizeof(arr2) << endl; // Gives no of bytes the array occupy
    // To get the size of array we 
    int n = sizeof(arr2)/sizeof(int);
    return 0;
}