#include <iostream>
using namespace std;

int main()
{
    string marcas[5];
    string marca = "";
    int i = 0;
    int opcion = 0;

    while (i <= 5)
    {
        cout << "\nBienvenido a la agencia de carros NO ande a Pie ";
        cout << "----- Menu -----";
        cout << "Selecione una opcion";
        cout << "1. registrar marca";
        cout << "2. listar marcas";
        cout << "3. Salir";

        cin >> opcion;

        if (opcion == 1)
        {
            cout << "Ingrese una marca: ";
            cin >> marca;
            marcas[i] =
        }
    }

    return 0;
}