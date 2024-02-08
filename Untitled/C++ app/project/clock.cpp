#include <iostream>
using namespace std;

int opcion = 0;

void listarEmpleado()
{
     for (int i = 0; i < 10; i++)
     {
          cout << "hello world";
     }
}

void registrarEmpleado()
{
     cout << "digite el nombre del empleado";
}

void procesarOpcion()
{
     switch (opcion)
     {
     case 1:
          registrarEmpleado();
          break;
     case 2:
          /* code */
          break;
     case 3:
          /* code */
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
               << "Registro de entradas y salidas"
               << "\n";
          cout << "----- Menu -----"
               << "\n";
          cout << "1. registrar empleado"
               << "\n";
          cout << "2. listar empleados"
               << "\n";
          cout << "3. buscar empleado por id"
               << "\n";
          cout << "4. Salir"
               << "\n";
          cout << "Porfavor selecione una opcion: ";
          cin >> opcion;
          //    procesarOpcion(opcion);
     } while (opcion != 5);
}

int main()
{
     menu();
     return 0;
}