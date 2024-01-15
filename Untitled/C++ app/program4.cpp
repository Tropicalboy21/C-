#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Please enter the number of digits";
    cin >> n;

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    for (int j = 0; j < n; j++)
    {
        cout << numbers[j];
    }

    return 0;
}