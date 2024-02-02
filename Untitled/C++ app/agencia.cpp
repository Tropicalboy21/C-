#include <iostream>
using namespace std;

int opcion = 0;
const int tamanno = 5;
string marcas[tamanno];
int i = 0;

void registrarMarca()
{
    string marca = "";
    cout << "Ingrese el nombre de la Marca: ";
    cin >> marca;

    if (marcas[i] != NULL)
    {
        marcas[i] = marca;
        i++;
        cout << "la marca " << marca << "fue agregada con exito";
    }
    else
    {
        cout << "No hay mas espacio";
    }
}

void listarMarcas()
{
    for (string marca : marcas)
    {
        cout << marca;
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
        procesarOpcion(opcion);
    } while (opcion != 4);
}

int main()
{
    menu();
    return 0;
}
