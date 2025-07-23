#include <iostream>
using namespace std;
int main(){
    // Input
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    // int n = sizeof(arr)/sizeof(int);
    for (int i = 0; i < n; i++){
        cout << "Enter marks of subject " << i+1 << ": ";
        cin >> arr[i];
    }
    // Output
     for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}