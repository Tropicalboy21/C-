#include <iostream>
using namespace std;

class Empleado
{
public:
    string nombre;
    string identificacion;
    string genero;
    int edad;
    string puesto;
    Empleado(string x, string y, string z, int w, string m)
    {
        nombre = x;
        identificacion = y;
        genero = z;
        edad = w;
        puesto = m;
    }
};
