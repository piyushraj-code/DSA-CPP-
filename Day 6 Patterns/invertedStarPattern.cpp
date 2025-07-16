#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    // Method 1
    for(int i = n; i > 0; i--){
        for(int j = i; j > 0; j--){
            cout << "*" << " ";
        }
        cout << endl;
    }

    // Method 2
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}