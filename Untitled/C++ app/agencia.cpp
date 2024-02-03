#include <iostream>
#include <array>
#include <string>
using namespace std;

int opcion = 0;
const int maxSize = 5;
std::array<std::string, maxSize> marcas;
int i = 0;

void registrarMarca()
{
    string marca = "";

    if (i == maxSize)
    {
        cout << "No hay mas espacio";
    }
    else
    {
        cout << "\nIngrese el nombre de la Marca: ";
        cin >> marca;
        marcas[i] = marca;
        i++;
        cout << "la marca " << marca << " fue agregada con exito. \n";
    }
}

void listarMarcas()
{
    for (string marca : marcas)
    {
        cout << "\n"
             << marca << "\n";
    }
}

void procesarOpcion(int opcion)
{

    switch (opcion)
    {
    case 1:
        registrarMarca();
        break;

    case 2:
        listarMarcas();
        break;

    default:
        break;
    }
}

void menu()
{
    do
    {

        cout << "\n"
             << "Bienvenido a la agencia de carros"
             << "\n";
        cout << "----- Menu -----"
             << "\n";
        cout << "1. registrar marca"
             << "\n";
        cout << "2. listar marcas"
             << "\n";
        cout << "3. Salir"
             << "\n";
        cout << "Porfavor selecione una opcion: ";
        cin >> opcion;
        procesarOpcion(opcion);
    } while (opcion != 4);
}

int main()
{

    menu();
    return 0;
}
