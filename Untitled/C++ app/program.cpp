#include <iostream>
using namespace std;

int main()
{

    int n = 0;
    cout << "Enter the number of times: ";
    cin >> n;

    const string message = "Hello, world!";

    int i = 0;

    while (i < n)
    {
        cout << message;
    }

    return 0;
}