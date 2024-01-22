#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    int *ptr = &x;

    cout << *ptr;
    return 0;
}