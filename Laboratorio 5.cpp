#include <iostream>
#include <cstdlib> // Para la función system("clear") en sistemas Unix/Linux y system("cls") en Windows

using namespace std;

// Funciones
int sumaParesImpares(int numero, bool sumarPares);
int factorial(int numero);
int contarDigitos(int numero);
void ordenarNumeros(int& a, int& b, int& c);
int sumaDigitos(int numero);

int main() {
    int opcion;
    int numero;

    do {
        // Menú de opciones
        cout << "MENU DE OPCIONES" << endl;
        cout << "1. Suma de numeros pares e impares" << endl;
        cout << "2. Factorial" << endl;
        cout << "3. Contador de digitos" << endl;
        cout << "4. Ordenamiento de numeros" << endl;
        cout << "5. Suma de digitos de un numero" << endl;
        cout << "0. Salir" << endl;
        cout << "Ingrese la opcion deseada: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese un numero entero: ";
                cin >> numero;
                cout << "La suma de numeros pares hasta " << numero << " es: " << sumaParesImpares(numero, true) << endl;
                cout << "La suma de numeros impares hasta " << numero << " es: " << sumaParesImpares(numero, false) << endl;
                break;
            case 2:
                cout << "Ingrese un numero entero: ";
                cin >> numero;
                cout << "El factorial de " << numero << " es: " << factorial(numero) << endl;
                break;
            case 3:
                cout << "Ingrese un numero entero: ";
                cin >> numero;
                cout << "El numero " << numero << " tiene " << contarDigitos(numero) << " digitos." << endl;
                break;
            case 4:
                int x, y, z;
                cout << "Ingrese tres numeros enteros para ordenar: ";
                cin >> x >> y >> z;
                ordenarNumeros(x, y, z);
                cout << "Los números ordenados de menor a mayor son: " << x << ", " << y << ", " << z << endl;
                break;
            case 5:
                cout << "Ingrese un numero entero: ";
                cin >> numero;
                cout << "La suma de los digitos de " << numero << " es: " << sumaDigitos(numero) << endl;
                break;
            case 0:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no valida. Por favor, ingrese una opcion valida." << endl;
        }
        
        // Limpiar la pantalla
        cout << "Presione Enter para continuar...";
        cin.ignore(); // Limpiar el buffer de entrada
        cin.get(); // Esperar hasta que el usuario presione Enter
        system("clear"); // Limpiar la pantalla en sistemas Unix/Linux
        system("cls"); // Limpiar la pantalla en Windows
    } while (opcion != 0);

    return 0;
}

// Implementación de funciones
int sumaParesImpares(int numero, bool sumarPares) {
    int suma = 0;
    for (int i = 1; i <= numero; i++) {
        if (i % 2 == (sumarPares ? 0 : 1)) {
            suma += i;
        }
    }
    return suma;
}

int factorial(int numero) {
    int resultado = 1;
    while (numero > 1) {
        resultado *= numero;
        numero--;
    }
    return resultado;
}

int contarDigitos(int numero) {
    int contador = 0;
    do {
        contador++;
        numero /= 10;
    } while (numero != 0);
    return contador;
}

void ordenarNumeros(int& a, int& b, int& c) {
    if (a > b) {
        swap(a, b);
    }
    if (b > c) {
        swap(b, c);
    }
    if (a > b) {
        swap(a, b);
    }
}

int sumaDigitos(int numero) {
    int suma = 0;
    while (numero != 0) {
        suma += numero % 10;
        numero /= 10;
    }
    return suma;
}