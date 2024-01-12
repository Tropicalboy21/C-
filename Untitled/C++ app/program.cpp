#include <iostream>
using namespace std;

int main()
{

    int n = 0;
    cout << "Enter the number of times: ";
    cin >> n;

    string message = "Hello, world!";

    int i = 0;

    string message = "Hello, Universe!";

    while (i < n)
    {
        cout << message + "\n";
        i++;
    }

    return 0;
}