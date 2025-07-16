#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    int z = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << z << " " ;
            z++;
        }
        cout << endl;
    }
    return 0;
}