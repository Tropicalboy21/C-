// File1.cpp
#include "File1.h"
#include <iostream>
using namespace std;

Empleado::Empleado(string nombre, string identificacion, string genero, int edad, string puesto)
{
    this.nombre = nombre;
    this.identificacion = identificacion;
    this.genero = genero;
    this.edad = edad;
    this.puesto = puesto;
};