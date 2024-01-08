#include <iostream>
using namespace std;

int main()
{
    // Write C++ code here
    int x = 0;
    cout << "Enter the a value:";
    cin >> x;

    switch (x)
    {
    case 1:
        cout << "x is equal to 1\n";
        break;
    case 2:
    case 3:
        cout << "\nx is equal to 2 or 3";
        break;

    default:
        cout << "x is not 1, 2, or 3 ";
        break;
    }

    return 0;
}
