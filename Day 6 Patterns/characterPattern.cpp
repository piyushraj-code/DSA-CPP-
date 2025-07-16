#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n: ";
    int t = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << (char)(65+t);
            t++;
        }
        cout << endl;
    }
    return 0;
}