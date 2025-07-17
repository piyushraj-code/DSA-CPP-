#include <iostream>
using namespace std;
bool isPrime(int n)
{
    bool isP = true;
    if (n <= 1)
    {
        cout << "Invalid argument!!" << endl;
        cout << "Enter valid n: ";
        cin >> n;
        return isPrime(n);
    }
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                isP = false;
                break;
            }
        }
    }
    return isP;
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << (isPrime(n) ? "Prime" : "Not Prime") << endl;
    return 0;
}