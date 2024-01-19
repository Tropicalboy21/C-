#include <iostream>
using namespace std;

int main()
{
    int ThreeExpFour = 1;
    for (int i = 0; i < 4; i = i + 1)
    {
        ThreeExpFour = ThreeExpFour * 3;
    }
    cout << "3^4 equals to: " << ThreeExpFour << endl;
    return 0;
}