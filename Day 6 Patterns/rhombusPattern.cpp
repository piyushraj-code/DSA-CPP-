#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        // Spaces
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        // Stars
        for (int j = 0; j < n; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}