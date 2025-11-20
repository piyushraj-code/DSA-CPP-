/*
    A subarray is a continuous part of an array
    The total no of subarrays possible for an array containing n elements is n*(n+1)/2
*/
#include <iostream>
using namespace std;
void printsubarr(int *arr, int n){
    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){
            // cout << "(" << start << "," << end << ") ";
            for(int i = start; i <= end; i++){
                cout << arr[i];
            }
            cout << ", ";
        }
        cout << endl;
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    printsubarr(arr, n);
    return 0;
}