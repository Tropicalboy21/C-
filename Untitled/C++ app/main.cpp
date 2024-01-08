#include <iostream>
using namespace std;

int main()
{
    // Write C++ code here
    int x;
    int y;
    cout << "Enter the a value:";
    cin >> x;
    cout << "Enter the second value:";
    cin >> y;
    if (x > y)
        cout << "first value is greater than the second value";
    else if (x < y)
        cout << "second value is greater than the first value";
    else
        cout << "both values are equal";

    return 0;
}
