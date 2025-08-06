#include <iostream>
// using namespace std; // Removed to avoid global namespace pollution
// Binary search can only be used for sorted array
// binSearch: Performs binary search on a sorted array.
// Parameters:
//   arr - pointer to the first element of the array
//   n   - number of elements in the array
//   key - value to search for
// Returns:
//   Index of 'key' in 'arr' if found, otherwise -1.
int binSearch(int *arr, int n, int key){
    int start = 0, end = n-1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {2,4,6,8,10,12,14};
    int key;
    std::cout << "Enter key to find: ";
    std::cin >> key;
    int size = sizeof(arr)/sizeof(arr[0]);
    int idx = binSearch(arr, size, key);
    if(idx < 0){
        std::cout << key << " is not found in the array." << std::endl;
    }
    else{
        std::cout << key << " is at the index " << idx << std::endl;
    }
    return 0;
}