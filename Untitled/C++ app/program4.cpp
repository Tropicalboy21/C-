#include <iostream>
using namespace std;

// Basic Statistics

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

    double sum = 0;

    for (int y = 0; y < size; y++)
    {
        sum += numbers[y];
        if (numbers[y] > maxNumber)
        {
            maxNumber = numbers[y];
        }
        if (numbers[y] < minNumber)
        {
            minNumber = numbers[y];
        }
    }

    double mean = sum / n;
    int range = maxNumber - minNumber;

    cout << "mean: " << mean << "\n";
    cout << "min: " << minNumber << "\n";
    cout << "max: " << maxNumber << "\n";
    cout << "range: " << range << "\n";

    return 0;
}