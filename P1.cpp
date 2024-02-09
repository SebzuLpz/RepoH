#include <iostream>
using namespace std;
int main() {
    int cantidad;
    cout << "Ingrese cantidad de numeros: " << endl;
    cin >> cantidad;
    while (cantidad <= 0) {
        cout << "La cantidad de numeros debe ser mayor a cero." << endl;
        cout << "Ingrese cantidad de numeros: " << endl;
        cin >> cantidad;
    }
    double suma = 0;
    double prom;
    double maximo, minimo;
    cout << "Ingrese el numero 1: " << endl;
    cin >> maximo;
    suma += maximo;
    minimo = maximo;
    for (int i = 1; i < cantidad; ++i) {
        double numero;
        cout << "Ingrese el numero " << i + 1 << ": " << endl;
        cin >> numero;
        suma += numero;
        if (numero > maximo) {
            maximo = numero;
        }
        if (numero < minimo) {
            minimo = numero;
        }
    }
    prom = suma / cantidad;
    cout << "\nResultados:" << endl;
    cout << "Promedio: " << prom << endl;
    cout << "Mayor: " << maximo << endl;
    cout << "Menor: " << minimo << endl;
    return 0;
}
