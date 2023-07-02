#include "LinkedListIterator.h"
#include "../Linked List Node/Node.h"

template <class Type>
LinkedListIterator<Type>::LinkedListIterator(){
    current_node_ptr = nullptr;
}

template <class Type>
LinkedListIterator<Type>::LinkedListIterator(Node<Type>* input_ptr){
    current_node_ptr = input_ptr;
}

template <class Type>
Type LinkedListIterator<Type>::operator*(){
    return current_node_ptr->data;
}

template <class Type>
LinkedListIterator<Type> LinkedListIterator<Type>::operator++(){
    // Iterate to the next node.
    current_node_ptr = current_node_ptr->next_node_ptr;
    return *this;
}

template <class Type>
bool LinkedListIterator<Type>::operator==(const LinkedListIterator<Type>& compared_iterator) const {
    return current_node_ptr == compared_iterator.current_node_ptr;
}

template <class Type>
bool LinkedListIterator<Type>::operator!=(const LinkedListIterator<Type>& compared_iterator) const {
    return !(current_node_ptr == compared_iterator.current_node_ptr);
}