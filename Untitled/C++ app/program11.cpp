#include <iostream>
using namespace std;

void squareRoot(int *numPtr)
{
    *numPtr = *numPtr * *numPtr;
}

int main()
{
    int x = 5;
    squareRoot(&x);
    cout << x;
    return 0;
}