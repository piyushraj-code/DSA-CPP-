#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec;
    vector<int> numbers = {1,3,4,5};
    vector<int> abc(5,0);
    for(int val: numbers){
        cout << val << endl;
    }
    // VECTOR FUNCTIONS
    cout << "Size before push back = " << vec.size() << endl;
    vec.push_back(21); // Add 21 in the last of the vector
    cout << "Size after push back = " << vec.size() << endl;
    vec.pop_back(); // Remove the last value from the vector
    cout << numbers.back() << endl;// Return the last value of the vector
    cout << numbers.front() << endl; // Return the first value of the vector
    
    return 0;
}