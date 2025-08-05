#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(int);
    int copyarr[n];
    cout << "Original array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        copyarr[i] = arr[n-i-1];
    }
    for(int i = 0; i < n; i++){
        arr[i] = copyarr[i];
    }
    cout << "Reversed array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
    return 0;

    // Method 2 with two pointer approach
    for(int i = 0; i < n/2; i++){
        swap(arr[i], arr[n-i-1]);
    }
}