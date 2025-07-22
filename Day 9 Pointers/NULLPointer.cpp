#include <iostream> 
using namespace std;
int main(){
    int *ptr = NULL;
    cout << ptr << endl;
    // cout << *ptr << endl; // Segmentation Fault
    // We can't derefrence a null pointer
    return 0;
}