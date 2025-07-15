#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    int sum = 0;
    for (int i = number; i > 0; i = i / 10)
    {
        sum = sum + i % 10;
    }
    cout << sum << endl;
    return 0;
}