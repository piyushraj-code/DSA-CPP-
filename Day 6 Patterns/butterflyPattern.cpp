#include <iostream>
using namespace std;
int main(){
    int n; 
    cout << "Enter n: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        // Stars
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        // Spaces
        for (int j = 1; j <= 2*n-2*i; j++){
            cout << " ";
        }
        // Stars
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = n; i >= 1; i--){
        // Stars
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        // Spaces
        for (int j = 1; j <= 2*n-2*i; j++){
            cout << " ";
        }
        // Stars
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}