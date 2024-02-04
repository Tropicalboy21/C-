#include <iostream>
#include <array>
#include <string>
using namespace std;

int opcion = 0;
const int maxSize = 5;
std::array<std::string, maxSize> marcas;
int i = 0;

int buscarMarca(string numMarca)
{
    for (int pos = 0; pos < marcas.size(); pos++)
    {
        if (!marcas[pos].empty() && marcas[pos].compare(numMarca))
        {
            return pos;
        }
    }
}

void registrarMarca()
{
    string marca = "";

    if (i == maxSize)
    {
        std::cout << "\nNo hay mas espacio." << std::endl;
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

void registrarNumVehiculos()
{
    std::cout << "Ingrese el nombre de la marca" << std::endl;
    string nomMarca = "";

    int posicion = buscarMarca(nomMarca);
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

    case 3:
        registrarNumVehiculos();
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
        cout << "2. registrar numero de vehiculos"
             << "\n";
        cout << "3. listar marcas"
             << "\n";
        cout << "4. Salir"
             << "\n";
        cout << "Porfavor selecione una opcion: ";
        cin >> opcion;
        procesarOpcion(opcion);
    } while (opcion != 5);
}

int main()
{

    menu();
    return 0;
}
