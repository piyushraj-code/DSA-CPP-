#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        // Spaces
        for(int j = 1; j <= n-i; j++){
            cout << " ";
        }
        // Nums backward
        for(int j = i; j >= 1; j--){
            cout << j;
        }
        // Nums forward
        for(int j = 2; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}