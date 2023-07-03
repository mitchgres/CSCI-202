#include "InsertionSort.h"

template <class Type>
void InsertionSort<Type>::sort(Type input_array[], int length){
    for(int out_of_order_index = 1; out_of_order_index < length; out_of_order_index++){
        Type temp = list[index];
        int index = out_of_order_index;

        do {
            input_array[index] = list[(index - 1)];
            index--;
        }
        while (index > 0 && input_array[(index - 1)] > temp);

        input_array[index] = temp;
    }
}