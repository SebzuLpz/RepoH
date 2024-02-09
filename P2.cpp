#include <iostream>
using namespace std;
int main() {
    int filas = 6;
    int columnas = 7;
    int matriz[filas][columnas];
    cout << "Ingrese los elementos de la matriz de 6x7:\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }
    cout << "\nMatriz 6x7: \n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < filas; i++) {
        int minFila = matriz[i][0];
        int maxFila = matriz[i][0];
        double promFila = 0;
        for (int j = 0; j < columnas; j++) {
            promFila += matriz[i][j];
            if (matriz[i][j] > maxFila) {
                maxFila = matriz[i][j];
            }
            if (matriz[i][j] < minFila) {
                minFila = matriz[i][j];
            }
        }
        promFila /= columnas;
        cout << "\nFila " << i + 1 << " : \n";
        cout << " Promedio: " << promFila << "\n Mayor: " << maxFila << "\n Menor: " << minFila << endl;
    }
    for (int j = 0; j < columnas; j++) {
        int minColumna = matriz[0][j];
        int maxColumna = matriz[0][j];
        double promColumna = 0;
        for (int i = 0; i < filas; i++) {
            promColumna += matriz[i][j];
            if (matriz[i][j] > maxColumna) {
                maxColumna = matriz[i][j];
            }
            if (matriz[i][j] < minColumna) {
                minColumna = matriz[i][j];
            }
        }
        promColumna /= filas;
        cout << "\nColumna " << j + 1 << " : \n";
        cout << " Promedio: " << promColumna << "\n Mayor: " << maxColumna << "\n Menor: " << minColumna << endl;
    }
    
    return 0;
}
