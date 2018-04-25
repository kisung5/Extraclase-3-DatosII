#include <iostream>
#include "Interpolation Search/Interpolation.h"



int main() {
    int array[] = {1,2,3,4,5};
    Interpolation interpolation;
    int n = sizeof(array)/sizeof(array[0]);
    clock_t time = -clock();
    int index = interpolation.interpolationSearch(array,3,n);
    time += clock();
    double total = time / (double)CLOCKS_PER_SEC;
    std::cout << index << std::endl;
    std::cout << total;
    return 0;
}