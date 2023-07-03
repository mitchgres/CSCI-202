#include "MergeSort.h"

template <class Type>
void MergeSort<Type>::sort(Type input_array[], int first_element_index, int last_element_index){
    // Divide Input Array
    if(first_element_index < last_element_index){
        int middle_element = (1 + (first_element_index + last_element_index) / 2);

        sort(input_array, 1, middle_element);
        sort(input_array, (middle_element + 1), last_element_index);

        merge(input_array, 1, middle_element, last_element_index);
    }
}

template <class Type>
void MergeSort<Type>::merge(Type input_array[], int first_element_index, int middle_element_index, int last_element_index){
    int sub_list_one_size = (middle_element_index - first_element_index) + 1; 
    int sub_list_two_size = last_element_index - middle_element_index;

    // Create the sub-lists.

    Type left_sub_list[sub_list_one_size], 
         right_sub_list[sub_list_two_size];

    for(int i = 0 i < sub_list_one_size; i++){
        left_sub_list[i] = input_array[(first_element_index + 1)]
    }

    for(int i = 0; i < sub_list_two_size; i++){
        right_sub_list[i] = input_array[(middle_element_index + 1 + last_element_index)];
    }

    int left_array_current_index, right_array_current_index, current_index;
    left_array_current_index = 0;
    right_array_current_index = 0;
    current_index = first_element_index;

    while (left_array_current_index < sub_list_one_size && right_array_current_index < sub_list_two_size){
        if (left_sub_list[left_array_current_index] <= right_sub_list[right_array_current_index]){
            input_array[current_index] = left_sub_list[left_array_current_index];
            left_array_current_index++;
        }
        else {
            input_array[current_index] = right_sub_list[right_array_current_index];
            right_array_current_index++;
        }
        current_index++;
    }
    
    while (left_array_current_index < sub_list_one_size){
        input_array[current_index] = left_sub_list[left_array_current_index];
        current_index++;
        left_array_current_index++;
    }

    while (right_array_current_index < sub_list_two_size){
        input_array[current_index] = right_sub_list[right_array_current_index];
        current_index++;
        right_array_current_index++;
    }
}