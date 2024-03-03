#include <iostream>
#include <string>
using namespace std;

class Empleado
{
public:
    Empleado(string value, string apellido) : nombre(nombre), apellido(apellido)
    {
    }

    std::string toString() const
    {
        return "Empleado\nnombre : " + nombre + "\napellido : " + apellido;
    }

private:
    string nombre;
    string apellido;
};

int main()
{
    Empleado nuevoEmpleado("julian", "Martinez");
    std::cout << nuevoEmpleado.toString() << std::endl;
    return 0;
}