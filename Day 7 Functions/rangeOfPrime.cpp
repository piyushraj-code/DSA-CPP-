#include <iostream>
using namespace std;
bool isPrime(int n)
{
    bool isP = true;
    if (n <= 1)
    {
        cout << "Invalid argument!!" << endl;
        return false;
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
void rangeOfPrime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }
}
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    rangeOfPrime(n);
    return 0;
}