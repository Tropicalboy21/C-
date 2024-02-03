#include <iostream>
using namespace std;

int opcion = 0;
const int tamanno = 5;
string marcas[tamanno];
int i = 0;

void registrarMarca()
{
    string marca = "";
    cout << "\nIngrese el nombre de la Marca: ";
    cin >> marca;

    if (marcas->size() == tamanno)
    {
        cout << "No hay mas espacio";
    }
    else
    {
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
