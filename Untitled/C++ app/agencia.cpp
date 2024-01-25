#include <iostream>
using namespace std;

int opcion = 0;

void menu()
{
    do
    {
        cout << "Bienvenido a la agencia de carros NO ande a Pie"
             << "\n";
        cout << "----- Menu -----"
             << "\n";
        cout << "1. registrar marca"
             << "\n";
        cout << "2. listar marcas"
             << "\n";
        cout << "3. Salir"
             << "\n";
        cout << "Porfavor selecione una opcion"
             << "\n";
        cin >> opcion;
    } while (opcion != 4);
}

int main()
{
    menu();
    return 0;
}
