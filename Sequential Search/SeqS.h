//
// Created by deiber on 4/24/18.
//

#ifndef EXTRACLASE_3_DATOSII_SEQS_H
#define EXTRACLASE_3_DATOSII_SEQS_H

#include <iostream>

using namespace std;

int BusquedaSecuencial(int array[], int len, int dato) {
    int i = 0;
    bool flag = false;
//    int len = sizeof(array) / sizeof(array[0]);
    while (!flag && (i <= len)) {
        if (array[i] == dato) {
            flag = true;
        } else i++;
    }
    if (!flag) {
        cout << "El numero buscado no existe en el arreglo" << endl;
        return -1;
    } else {
        cout << "Numero encontrado en la posicion: " << i << endl;
        return i;
    }
}

#endif EXTRACLASE_3_DATOSII_SEQS_H
