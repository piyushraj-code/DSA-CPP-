#include <iostream>
using namespace std;
void fucnti(int arr[]){
    arr[0] = 19999;
}
// NOTE:-> While passing an array in a function we should also pass the size of the array, because we inside the function array is passed as a pointer which has the starting location only not the ending location, This means we can't calculate the size of array inside the function.
int main(){
    // If we pass an array name in a function it passes by refrence which means that any change inside the fucntion will reflect in original array and is same as passing by pointer
    int arr[] = {1,2,3,4,5,6};
    fucnti(arr);
    cout << arr[0];
    return 0;
}