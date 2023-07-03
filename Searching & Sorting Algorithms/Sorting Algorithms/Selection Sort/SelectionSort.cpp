#include "SelectionSort.h"

template <class Type>
void SelectionSort<Type>::sort(Type input_array[], int length){
    int min_index;

    for(int index = 0; index < length; index++){
        getSmallestElement(input_array, index, (length - 1));
        swapElements(input_array, index, min_index);
    }
}

template <class Type>
int SelectionSort<Type>::getSmallestElement(Type input_array[], int first, int last){
    int min_index = first;

    for(int index = (first + 1); index <= last; index++){
        if(input_array[index] < input_array[min_index]){
            min_index = index;
        }
    }
    
}

template <class Type>
void SelectionSort<Type>::swapElements(Type input_array[], int first, int second){
    Type temp = input_array[first];
    input_array[first] = input_array[second];
    input_array[second] = temp;
}