#include <iostream>
using namespace std;
int inArray(int arr[], int size, int key){
    for (int i = 0; i < size; i++){
        if(arr[i] == key){
            cout << key << " is in the array" << endl;
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {2,5,23,75,88,21};
    int n;
    cout << "Enter what you want to search inside the array: ";
    cin >> n;
    int size = sizeof(arr)/sizeof(int);
    cout << inArray(arr, size, n) << endl;
    return 0;
}