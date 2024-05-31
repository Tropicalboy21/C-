#include <iostream>
#include <cstdlib>
using namespace std;

int valor1, valor2, valor3;

void limpiarConsola() {
    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #else
        system("clear");
    #endif
}

void ingresarValores() {
    cout << "Por favor ingrese 3 valores" << endl;
    cout << "Valor 1: ";
    cin >> valor1;
    cout << "Valor 2: ";
    cin >> valor2;
    cout << "Valor 3: ";
    cin >> valor3;
}

void Ord_Num_Asc(int value1, int value2, int value3) {
    int primerValor, segundoValor, tercerValor;

    if (value1 <= value2 && value1 <= value3) {
        primerValor = value1;
        if (value2 <= value3) {
            segundoValor = value2;
            tercerValor = value3;
        } else {
            segundoValor = value3;
            tercerValor = value2;
        }
    } else if (value2 <= value1 && value2 <= value3) {
        primerValor = value2;
        if (value1 <= value3) {
            segundoValor = value1;
            tercerValor = value3;
        } else {
            segundoValor = value3;
            tercerValor = value1;
        }
    } else {
        primerValor = value3;
        if (value1 <= value2) {
            segundoValor = value1;
            tercerValor = value2;
        } else {
            segundoValor = value2;
            tercerValor = value1;
        }
    }

    cout << "Los valores en orden ascendente son: " << primerValor << " " << segundoValor << " " << tercerValor << endl;
}

void Ord_Num_Des(int value1, int value2, int value3) {
    int primerValor, segundoValor, tercerValor;

    if (value1 >= value2 && value1 >= value3) {
        primerValor = value1;
        if (value2 >= value3) {
            segundoValor = value2;
            tercerValor = value3;
        } else {
            segundoValor = value3;
            tercerValor = value2;
        }
    } else if (value2 >= value1 && value2 >= value3) {
        primerValor = value2;
        if (value1 >= value3) {
            segundoValor = value1;
            tercerValor = value3;
        } else {
            segundoValor = value3;
            tercerValor = value1;
        }
    } else {
        primerValor = value3;
        if (value1 >= value2) {
            segundoValor = value1;
            tercerValor = value2;
        } else {
            segundoValor = value2;
            tercerValor = value1;
        }
    }

    cout << "Los valores en orden descendente son: " << tercerValor << " " << segundoValor << " " << primerValor << endl;
}

void Promedio(int value1, int value2, int value3) {
    double suma = value1 + value2 + value3;
    double promedio = suma / 3.0;
    cout << "El promedio de los numeros " << value1 << ", " << value2 << " y " << value3 << " es: " << promedio << endl;
}

void Aumentar(int value1, int value2, int value3) {
    double suma = value1 + value2 + value3;
    double aumento = suma * 1.75;
    cout << "El resultado de la suma de los números " << value1 << ", " << value2 << " y " << value3 << ", aumentada en un 75% es: " << aumento << endl;
}

void Mayor(int value1, int value2, int value3) {
    int mayor = value1;
    if (value2 > mayor) mayor = value2;
    if (value3 > mayor) mayor = value3;
    cout << "Entre los números " << value1 << ", " << value2 << ", " << value3 << " el mayor es: " << mayor << "." << endl;
}

void Menor(int value1, int value2, int value3) {
    int menor = value1;
    if (value2 < menor) menor = value2;
    if (value3 < menor) menor = value3;
    cout << "Entre los números " << value1 << ", " << value2 << ", " << value3 << " el menor es: " << menor << "." << endl;
}

void procesarOpcion(int opcion) {
    limpiarConsola();
    ingresarValores();
    limpiarConsola();
    
    switch (opcion) {
        case 1:
            Ord_Num_Asc(valor1, valor2, valor3);
            break;
        case 2:
            Ord_Num_Des(valor1, valor2, valor3);
            break;
        case 3:
            Promedio(valor1, valor2, valor3);
            break;
        case 4:
            Aumentar(valor1, valor2, valor3);
            break;
        case 5:
            Mayor(valor1, valor2, valor3);
            break;
        case 6:
            Menor(valor1, valor2, valor3);
            break;
        case 7:
            cout << "Gracias, hasta pronto" << endl;
            break;
        default:
            cout << "Opcion Invalida" << endl;
            break;
    }
    
    if (opcion != 7) {
        cout << "Presione enter para continuar...";
        cin.ignore();
        cin.get();
    }
}

void menu() {
    int opcion = -1;
    do {
        limpiarConsola();
        cout << "    Menu    " << endl;
        cout << "1. Ordenar Números Ascendentemente" << endl;
        cout << "2. Ordenar Números Descendentemente " << endl;
        cout << "3. Promedio " << endl;
        cout << "4. Aumentar " << endl;
        cout << "5. Mayor " << endl;
        cout << "6. Menor " << endl;
        cout << "7. Salir " << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 7) {
            procesarOpcion(opcion);
        } else {
            cout << "Opcion invalida" << endl;
            cout << "Presione enter para continuar...";
            cin.ignore();
            cin.get();
        }
    } while (opcion != 7);
}

int main() {
    menu();
    return 0;
}