#include "File1.h"
#include <iostream>
using namespace std;

int opcion = 0;

Empleado empleado();

std::vector<empleado> empleados;

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
     string nombreIn;
     cin >> nombreIn;

     cout << "Porfavor ingrese la identificación del empleado: ";
     string identificacionIn;
     cin >> identificacionIn;

     cout << "Porfavor ingrese un genero F. Femenino, M. Masculino, O. No decir : ";
     string generoIn;
     cin >> generoIn;

     cout << "Porfavor ingrese la edad: ";
     int edadIn;
     cin >> edadIn;

     cout << "Porfavor ingrese la posición de trabajo: ";
     string puestoIn;
     cin >> puestoIn;

     Empleado(nombreIn, identificacionIn, generoIn, edadIn, puestoIn);
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