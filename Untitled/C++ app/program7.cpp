#include <iostream>
using namespace std;

int main()
{
    short number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "The factorial of " << number << " is";
    int accumulator = 1;
    for (; accumulator < number; number++)
        cout << accumulator << ".\n";
    return 0;
}