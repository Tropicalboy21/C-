#include <iostream>
using namespace std;

int main()
{
    int n = 2;
    while (n == 2)
    {
        int x = 0;
        cout << "Please enter a number: ";
        cin >> x;
        int c = x % 5;

        if (c == 0)
        {
            cout << "number " << x << " is divisible by 5";
            n = -1;
        }
    }

    return 0;
}