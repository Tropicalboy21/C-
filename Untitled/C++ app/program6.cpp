#include <iostream>
using namespace std;

// Ternary operators

int main()
{
    bool n = true;
    while (n == true)
    {
        int x = 0;
        cout << "Please enter a number: ";
        cin >> x;

        int c = x % 5;

        c == 0 &&x >= 0 ? n = false : n = true;

        if (n == false)
        {
            cout << "The number " << x << " is divisible by 5";
        }
        continue;
    }

    return 0;
}