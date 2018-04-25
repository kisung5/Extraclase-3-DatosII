//
// Created by kisung on 24/04/18.
//

#include "Interpolation.h"

int Interpolation::interpolationSearch(int array[] ,int element, int length) {

    int lo = 0, hi = (length - 1);

    while (lo <= hi && element >= array[lo] && element <= array[hi])
    {

        int pos = (int)(lo + (((double)(hi-lo) /
                         (array[hi]-array[lo]))*(element - array[lo])));

        // Condition of target found
        if (array[pos] == element)
            return pos;

        // If x is larger, x is in upper part
        if (array[pos] < element)
            lo = pos + 1;

            // If x is smaller, x is in lower part
        else
            hi = pos - 1;
    }
    return -1;
}
