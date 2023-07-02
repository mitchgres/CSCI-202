#include "LinkedList.h"

template <class Type>
bool LinkedList<Type>::isEmpty() const {
    return (first_node_ptr == nullptr);
}

template <class Type>
LinkedList<Type>::LinkedList(){
    first_node_ptr = nullptr;
    last_node_ptr = nullptr;
    size = 0;
}

template <class Type>
void LinkedList<Type>::destroy(){
    Node<Type>* temp_node_ptr;

    while (first_node_ptr != nullptr){
        temp_node_ptr = first_node_ptr;
        first_node_ptr = first_node_ptr->next_node_ptr;
        delete temp_node_ptr;
    }
    
    last_node_ptr = nullptr;
    size = 0;
}

template <class Type>
void LinkedList<Type>::reset(){
    destroy();
}

template <class Type>
int LinkedList<Type>::length() const {
    return size;
}

template <class Type>
Type LinkedList<Type>::front() const {
    assert(first_node_ptr != nullptr);
    return first_node_ptr->data;
}

template <class Type>
Type LinkedList<Type>::back() const {
    assert(last_node_ptr != nullptr);
    return last_node_ptr->data;
}

template <class Type>
LinkedListIterator<Type> LinkedList<Type>::begin(){
    LinkedListIterator<Type> temp_iterator(first_node_ptr);
    return temp_iterator;
}

template <class Type>
LinkedListIterator<Type> LinkedList<Type>::end(){
    LinkedListIterator<Type> temp_iterator(nullptr);
    return temp_iterator;
}

template <class Type>
void LinkedList<Type>::copy(const LinkedList<Type>& other_list){
    Node<Type> *create_node_ptr;
    Node<Type> *reference_node_ptr;

    if(first_node_ptr != nullptr){
        destroy(); // It isn't empty -- make it so. 
    }

    if (other_list.first_node_ptr == nullptr){
        first_node_ptr = nullptr;
        last_node_ptr = nullptr;
        size = 0;
    }

    else {
        reference_node_ptr = other_list.first_node_ptr;
        size = other_list.length()

        first_node_ptr = new Node<Type>;

        first_node_ptr->data = reference_node_ptr->data;
        first_node_ptr->next_node_ptr = nullptr;

        last_node_ptr = first_node_ptr;

        reference_node_ptr = reference_node_ptr->next_node_ptr;

        while (reference_node_ptr != nullptr){
            create_node_ptr = new Node<Type>;
            create_node_ptr->data = reference_node_ptr->data;
            create_node_ptr->next_node_ptr = nullptr;

            last_node_ptr->next_node_ptr = create_node_ptr;
            last_node_ptr = create_node_ptr;

            reference_node_ptr = reference_node_ptr->next_node_ptr;
        }
        
    }
    
    
}

template <class Type>
LinkedList<Type>::~LinkedList(){
    destroy();
}

template <class Type>
LinkedList<Type>::LinkedList(const LinkedList<Type>& input_list){
    first_node_ptr = nullptr;
    copy(input_list);
}









