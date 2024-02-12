// File1.h
#ifndef FILE1_H
#define FILE1_H

#include <iostream>
using namespace std;

class Empleado
{
public:
    Empleado();
    string nombre, identificacion, genero, puesto;
    int edad;

    Empleado(string nombre = "Lenin", string identificacion = "ugaldeav", string genero = "M", int edad = 23, string puesto = "Prod");
};

#endif