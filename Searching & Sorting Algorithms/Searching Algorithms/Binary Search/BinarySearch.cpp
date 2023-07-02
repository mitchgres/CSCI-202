#include "BinarySearch.h"

template <class Type>
int BinarySearch<Type>::search(const Type input_array[], int length, const Type& target){
    int first = 0;
    int last = (length - 1);
    int middle;

    bool isTargetFound = false;
    int targetLocation = 0;

    while(first <= last && !isTargetFound){
        middle = (first + last) / 2;

        if(input_array[middle] == target){
            isTargetFound = true;
            
            break;
        }

        else if (input_array[middle] > target){
            last = (middle - 1);
        }
        else {
            first = (middle + 1);
        }
    }

    if (isTargetFound){
        return targetLocation;
    }
    else {
        return -1
    }
    
}