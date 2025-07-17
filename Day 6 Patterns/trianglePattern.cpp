#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int z = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << z;
            if (z == 1)
            {
                z--;
            }
            else if (z == 0)
            {
                z++;
            }
        }
        cout << endl;
    }
    // Apna College Solution
    // bool val = true;
    // int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << val << " ";
    //         val = !val;
    //     }
    //     cout << "\n";
    // }
    return 0;
}