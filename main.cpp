#include <iostream>
#include <string.h>
using namespace std;

const int N = 20;

int main() {
    char placa[N];
    int tam;
    
    cout << "Digite uma placa: ";
    cin >> placa;    
    tam = strlen(placa);
    
    if (tam ==8 &&
		placa[0] >= 'A' && placa[0] <= 'Z' &&
        placa[1] >= 'A' && placa[1] <= 'Z' &&
        placa[2] >= 'A' && placa[2] <= 'Z' &&
        placa[3] == '-' &&
        placa[4] >= '0' && placa[4] <= '9' &&
        placa[5] >= '0' && placa[5] <= '9' &&
        placa[6] >= '0' && placa[6] <= '9' &&
        placa[7] >= '0' && placa[7] <= '9') {
        cout << "Placa no padrao antigo" << endl;
    }
    else if (tam ==7 &&
			placa[0] >= 'A' && placa[0] <= 'Z' &&
             placa[1] >= 'A' && placa[1] <= 'Z' &&
             placa[2] >= 'A' && placa[2] <= 'Z' &&
             placa[4] >= 'A' && placa[4] <= 'Z' &&
             placa[3] >= '0' && placa[3] <= '9' &&
             placa[5] >= '0' && placa[5] <= '9' &&
             placa[6] >= '0' && placa[6] <= '9') {
        cout << "Padrao Mercosul para carros" << endl;
    }
    else if (tam ==7 &&
			placa[0] >= 'A' && placa[0] <= 'Z' &&
             placa[1] >= 'A' && placa[1] <= 'Z' &&
             placa[2] >= 'A' && placa[2] <= 'Z' &&
             placa[5] >= 'A' && placa[5] <= 'Z' &&
             placa[3] >= '0' && placa[3] <= '9' &&
             placa[4] >= '0' && placa[4] <= '9' &&
             placa[6] >= '0' && placa[6] <= '9') {
        cout << "Placa Mercosul para motos" << endl;
    }
    else {
        cout << "Placa invalida" << endl;
    }
    
    return 0;
}

