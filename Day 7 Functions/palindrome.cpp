#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(int n){
    bool isPalin = false;
    string str = to_string(n);
    int len = str.length();
    if(len % 2 == 0){
        return isPalin;
    }
    else{
        for(int i = 0; i <= len/2; i++){
            if(str[i] != str[len-1-i]){
                isPalin = false;
                break;
            }
            else{
                isPalin = true;
            }
        }
    }
    return isPalin;
    
}
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << (isPalindrome(n) ? "Yes" : "No");
    return 0;
}