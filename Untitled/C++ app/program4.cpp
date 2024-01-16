#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Please enter the number of digits: \n";
    cin >> n;

    int numbers[n];

    for (int i = 0; i < n; i++)
    {

        cout << "Please enter the digit number #" << i + 1 << " ";
        cin >> numbers[i];
    }

    int minNumber = numbers[0];
    int maxNumber = numbers[0];

    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int y = 0; y < size; y++)
    {
        if (numbers[y] > maxNumber)
        {
            maxNumber = numbers[y];
        }
        if (numbers[y] < minNumber)
        {
            minNumber = numbers[y];
        }
    }

    int mean = numbers[0];
    int sum = 0;

    if (n % 2 == 0)
    {
        sum = numbers[n / 2] + numbers[n / 2 - 1];
        mean = sum / 2;
    }
    else
    {
        mean = numbers[n / 2];
    }

    cout << "mean: " << mean << "\n";
    cout << "min: " << minNumber << "\n";
    cout << "max: " << maxNumber << "\n";

    return 0;
}