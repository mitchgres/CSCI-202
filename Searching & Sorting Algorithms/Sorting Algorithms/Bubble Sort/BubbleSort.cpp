#include "BubbleSort.h"

template<class Type>
void BubbleSort<Type>::sort(Type input_array[], int length){
    for(int iteration = 1; iteration < length; iteration++){
        for(int index = 0; index < (length - iteration); index++){
            if (input_array[index] > input_array[(index + 1)]){
                Type temp = input_array[index];
                input_array[index] = input_array[(index + 1)];
                input_array[(index + 1)] = temp;
            }
            
        }
    }
}