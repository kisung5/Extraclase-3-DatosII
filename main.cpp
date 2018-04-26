#include <iostream>
#include "Interpolation Search/Interpolation.h"
#include "Binary Search/BinaryS.hpp"
#include "Sequential Search/SeqS.hpp"


int main() {
    //INTERPOLATION
//    int array[] = {1,2,3,4,5};
//    Interpolation interpolation;
//    int n = sizeof(array)/sizeof(array[0]);
//    clock_t time = -clock();
//    int index = interpolation.interpolationSearch(array,3,n);
//    time += clock();
//    double total = time / (double)CLOCKS_PER_SEC;
//    std::cout << index << std::endl;
//    std::cout << total;
//    return 0;


    //BINARY
//    int arr[] = {1, 2, 2, 3, 4, 6, 7, 8, 9, 0, 12, 13, 14, 15, 11, 22, 33, 44, 55};
//    auto n = sizeof(arr) / sizeof(arr[0]);
//    std::sort(arr, arr + (n - 1));
//    auto time = -clock();
//    auto index = binarySearch(arr, 0, n - 1, 33);
//    time += clock();
//    double total = time / (double)CLOCKS_PER_SEC;
//    std::cout << index << std::endl;
//    std::cout << total;
//    return 0;


    //SECUENCIAL
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);
    long time = -clock();
    int index = BusquedaSecuencial(array, 3);
    time += clock();
    double total = time / (double) CLOCKS_PER_SEC;
    std::cout << index << std::endl;
    std::cout << total;
    return 0;
}