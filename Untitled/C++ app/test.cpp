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
        cout << "Bienvenido a la agencia de carros NO ande a Pie"
             << "\n";
        cout << "----- Menu -----"
             << "\n";
        cout << "Selecione una opcion"
             << "\n";
        cout << "1. registrar marca"
             << "\n";
        cout << "2. listar marcas"
             << "\n";
        cout << "3. Salir"
             << "\n";

        cin >> opcion;

        if (opcion == 1)
        {
            cout << "Ingrese una marca: ";
            cin >> marca;
            marcas[i] = marca;
            i = i + 1;
        }
        if (opcion == 2)
        {
            for (string marca : marcas)
            {
                cout << marca << "\n";
            }
        }
        if (opcion == 3)
        {
            break;
        }
    }

    return 0;
}