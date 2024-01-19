#include <iostream>
using namespace std;

int raiseToPower(int base, int exponent)
{
    int result = 1;

    for (int i = 0; i < exponent; i = i + 1)
    {
        result = result * base;
    }

    return result;
}

int main()
{
    int threeExpFour = raiseToPower(3, 4);
    cout << "3^4 equals: " << threeExpFour << endl;
    int sixExpFive = raiseToPower(6, 5);
    cout << "6^5 equals: " << sixExpFive << endl;
    int twelveExpTen = raiseToPower(12, 10);
    cout << "12^10 equals: " << twelveExpTen << endl;
    return 0;
}