#include "QuickSort.h"

template <class Type>
void QuickSort<Type>::sort(Type input_array[], int first_element_index, int last_element_index){
    int pivot_location;

    if(first_element_index < last_element_index){
        pivot_location = getPartitionIndex(input_array, first_element_index, last_element_index);
        sort(input_array, first_element_index, (pivot_location - 1));
        sort(input_array, (pivot_location + 1), last_element_index);
    }
}

template <class Type>
int QuickSort<Type>::getPartitionIndex(Type input_array[], int first_element_index, int last_element_index){
    Type pivot_index;
    int small_index;

    swapElements(input_array, first_element, ((first_element + last_element_index) / 2));

    pivot_index = input_array[first_element_index];
    small_index = first_element_index;

    for(int index = (first_element_index + 1); index <= last_element_index; index++){
        if (input_array[index] < pivot_index){
            small_index++;
            swapElements(input_array, small_index, index);
        }
        
    }

    swapElements(input_array, first_element_index, small_index);

    return small_index;
}

template <class Type>
void QuickSort<Type>::swapElements(Type input_array[], int first_element_index, int second_element_index){
    Type temp_var = input_array[first_element_index];
    input_array[first_element_index] = input_array[second_element_index];
    input_array[second_element_index] = temp_var;
}