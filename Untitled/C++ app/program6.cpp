#include <iostream>
using namespace std;

int main()
{
    bool n = true;
    while (n == true)
    {
        int x = 0;
        cout << "Please enter a number: ";
        cin >> x;

        int c = x % 5;

        c == 0 ? n = false : n = true;
    }

    return 0;
}