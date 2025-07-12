#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int smallest(int m[], int size) {
    int smallest = INT32_MAX;
    for (int i = 0; i < size; i++){
        if (m[i] < smallest){
            smallest = m[i];
        }
    }
    return smallest;
}
// Index of smallest value
int index(int m[], int size){
    int smallest = INT32_MAX;
    int index = 0;
    for(int i = 0; i < size; i++){
        smallest = min(m[i], smallest);
    }
    for(int i = 0; i < size; i++){
        if(m[i] == smallest){
            index = i;
            break;
        }
    }
    return index;
}
// Linear search algorithm
int linSearch(int m[], int size, int target){
    for(int i = 0; i < size; i++){
        if(m[i] == target){
            return i;
        }
    }
    return -1;
}
// Reversing an array 2 pointer approach
void reverseArr(int arr[], int size){
    for (int i = 0; i < size/2; i++){
        swap(arr[i], arr[size -i -1]);
    }
}
// Write a function to print all the unique values in an array
void uniqueValues(int arr[], int size){
    bool isUnique = true;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(i != j && arr[i] == arr[j]){
                isUnique = false;
                break;
            }   
        }
        if(isUnique){
            cout << arr[i] << " ";
        }
    }
}
// Write a program to swap max and minimum elements of an array
void swapMaxMin(int arr[], int size){
    int smallest = INT32_MAX;
    int largest = INT32_MIN;
    int maxIndex = 0;
    int minIndex = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
            minIndex = i;
        }
        if(arr[i] > largest){
            largest = arr[i];
            maxIndex = i;
        }
    }
    swap(arr[maxIndex], arr[minIndex]);
}
// Write a function to find intersection of two array
void intersection(int arr1[], int size1, int arr2[], int size2){
    for(int i = 0; i < size1; i++){
        for (int j = 0; j < size2; j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}
int main(){
    int marks[] = {99,99,100,58,77};
    int size = 5;
    cout << smallest(marks, size) << endl;
    reverseArr(marks, size);
    for (int i = 0; i < size; i++){
        cout << marks[i] << endl;
    }
    uniqueValues(marks, size);
    swapMaxMin(marks, size);
    cout << endl;
    for (int i = 0; i < size; i++){
        cout << marks[i] << " ";
    }
    return 0;
}