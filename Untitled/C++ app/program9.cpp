#include <iostream>
using namespace std;

void ordenarDescendentemente(int value1, int value2, int value3)
{

    int primerValor, segundoValor, tercerValor;

    if (value1 <= value2 && value1 <= value3)
    {
        primerValor = value1;
        if (value2 <= value3)
        {
            segundoValor = value2;
            tercerValor = value3;
        }
        else
        {
            segundoValor = value3;
            tercerValor = value2;
        }
    }
    else if (value2 <= value1 && value2 <= value3)
    {
        primerValor = value2;
        if (value1 <= value3)
        {
            segundoValor = value1;
            tercerValor = value3;
        }
        else
        {
            segundoValor = value3;
            tercerValor = value1;
        }
    }
    else
    {
        primerValor = value3;
        if (value1 <= value2)
        {
            segundoValor = value1;
            tercerValor = value2;
        }
        else
        {
            segundoValor = value2;
            tercerValor = value1;
        }
    }

    cout << "los valores en orden ascendete son: " << endl;
    cout << primerValor << " ";
    cout << segundoValor << " ";
    cout << tercerValor << endl;
}

int main()
{
    int x;
    int *ptr = &x;

    cout << ptr;

    return 0;
}