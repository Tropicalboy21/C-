#include <iostream>
using namespace std;

int main()
{
    int threeExpFour = 1;
    for (int i = 0; i < 4; i = i + 1)
    {
        threeExpFour = threeExpFour * 3;
    }
    cout << "3^4 equals to: " << threeExpFour << endl;
    int sixExpFive = 1;
    for (int i = 0; i < 5; i = i + 1)
    {
        sixExpFive = sixExpFive * 6;
    }
    cout << "5^6 equals to: " << sixExpFive << endl;
    int twelveExpTen = 1;
    for (int i = 0; i < 5; i = i + 1)
    {
        twelveExpTen = twelveExpTen * 12;
    }
    cout << "12^10 equals to: " << twelveExpTen << endl;

    return 0;
}