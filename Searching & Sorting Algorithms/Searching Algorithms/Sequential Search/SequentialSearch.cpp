#include "../LinkedList.h"
#include "SequentialSearch.h"

template <class Type>
int SequentialSearch<Type>::searchArray(const Type array[], int length, const Type& target){
    bool isTargetFound = false;
    int targetLocation = 0;

    for(int i = 0; i<length; i++){
        if(array[i] == target){
            isTargetFound = true;
            targetLocation = i;
            break;
        }
    }

    return (isTargetFound) ? (i) : (-1);
}

template <class Type>
int SequentialSearch<Type>::searchList(const LinkedList<Type> linked_list, const Type& target){

}