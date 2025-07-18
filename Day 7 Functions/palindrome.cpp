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

// Method 2 Using reversing the digit

int revDig(int n){
    int result = 0;
    while(n > 0){
        int lastDig = n%10;
        result = result*10 + lastDig;
        n = n / 10;
    }
    return result;
}

bool isPalindrome2(int n){
    int reversed = revDig(n);
    if(reversed == n){
        return true;
    }
    return false;
}
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << (isPalindrome(n) ? "Yes" : "No") << endl;
    cout << (isPalindrome2(n) ? "Yes" : "No") << endl;
    return 0;
}