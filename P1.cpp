#include <iostream>
using namespace std;
int main (){
    int cantidad;
    cout<<"Ingrese cantidad de numeros: "<<endl;
    cin>>cantidad;
    if (cantidad<=0){
        cout<<"La cantidad de numeros debe ser mayor a cero."<<endl;
        cout<<"Ingrese cantidad de numeros: "<<endl;
    cin>>cantidad;
    }
    double*numeros=new double[cantidad];
    cout<<"Ingrese los numeros uno por uno: "<<endl;
    for (int i=0; i<cantidad;++i){
        cout<<"Numero "<<i+1<<" : "<<endl;
        cin>>numeros[i];
    }
    double suma=0;
    double prom;
    int maximo=numeros[0];
    int minimo=numeros[0];
    for (int i = 0; i < cantidad; ++i) {
        suma += numeros[i];
        if (numeros[i] > maximo) {
            maximo = numeros[i];
        }
        if (numeros[i] < minimo) {
            minimo = numeros[i];
        }
    }
    prom = suma / cantidad;
    cout << "\nResultados:" << endl;
    cout << "Promedio: " << prom << endl;
    cout << "Mayor: " << maximo << endl;
    cout << "Menor: " << minimo << endl;
    return 0;
}
