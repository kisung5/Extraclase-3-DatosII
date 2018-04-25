//
// Created by Roger Valderrama on 4/25/18.
//

#ifndef EXTRACLASE_3_DATOSII_BINARYS_HPP
#define EXTRACLASE_3_DATOSII_BINARYS_HPP

/**
 * @brief A recursive binary search function. It returns location of x in given array arr[left..right] is present,
 * otherwise -1
 * @param arr SORTED array
 * @param left first value to the left
 * @param right last value to the right
 * @param x value to be searched
 * @return position of x
 */

int binarySearch(int arr[], int left, int right, int x) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, left, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, right, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}


#endif //EXTRACLASE_3_DATOSII_BINARYS_HPP
