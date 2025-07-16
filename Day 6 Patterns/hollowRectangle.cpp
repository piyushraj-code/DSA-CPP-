#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n:";
    cin >> n;
    for(int i = 0; i < n; i++){
        if(i == 0 || i == n-1){
            for(int j = 0; j <= n; j++){
                cout << "*";
            } 
        }
        else{
            for(int j = 0; j <= n; j++){
                if(j == 0 || j == n){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    // Mtehod 2
    for(int i = 0; i < n; i++){
        cout << "*";
        for(int j = 0; j < n-1; j++){
            if(i == 0 || i == n-1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << "*" << endl;;
    }
    return 0;
}