#include <iostream>
#include "Interpolation Search/Interpolation.h"
#include "Binary Search/BinaryS.hpp"
#include "Sequential Search/SeqS.h"

int main() {
    const int LargoDeArray = 10001;
    int array[LargoDeArray] = {};
    for (int i = 0; i < LargoDeArray; i++) {
        array[i] = i;
    }
    int len = sizeof(array) / sizeof(array[0]);

    long time = -clock();

    //int index = BusquedaSecuencial(array, len, LargoDeArray-1); //Secuencial (Lista, largo de lista, Numero a buscar)
    int index = binarySearch(array, 0, len,
                             LargoDeArray - 1);    //Binaria (Lista, Numero inicial, largo de lista, Numero a buscar)
//    Interpolation interpolation;                                  //Secuencial (Lista, Numero a buscar, largo de lista)
//    int index = interpolation.interpolationSearch(array,LargoDeArray-1,len);

    time += clock();
    double total = time / (double) CLOCKS_PER_SEC;
    std::cout << index << std::endl;
    std::cout << total << std::endl;

    return 0;
}
