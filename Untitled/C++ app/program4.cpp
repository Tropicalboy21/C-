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

    return 0;
}