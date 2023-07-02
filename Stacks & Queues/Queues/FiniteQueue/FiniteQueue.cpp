#include "FiniteQueue.h"

template <class Type>
FiniteQueue<Type>::FiniteQueue(int max_size){
    init(max_size);
}

template <class Type>
FiniteQueue<Type>::FiniteQueue(){
    FiniteQueue<Type>(100);

}

template <class Type>
FiniteQueue<Type>::~FiniteQueue(){
    delete[] queue_array;
}

template <class Type>
bool FiniteQueue<Type>::isEmpty() const {
    return current_size == 0;
}

template <class Type>
bool FiniteQueue<Type>::isFull() const {
    return current_size == max_size;
}

template <class Type>
void FiniteQueue<Type>::init(int max_size){
    // Basically remake everything from scratch.
    FiniteQueue<Type>::max_size = max_size;
    front_element = 0;
    back_element = (FiniteQueue<Type>::max_size - 1);
    current_size = 0;
    queue_array = new Type[FiniteQueue<Type>::max_size];
}

template <class Type>
Type FiniteQueue<Type>::front() const {
    assert(!isEmpty());
    return queue_array[front_element];
}

template <class Type>
Type FiniteQueue<Type>::back() const {
    assert(!isEmpty);
    return queue_array[front_element];
}

template <class Type>
void FiniteQueue<Type>::add(const Type& new_element){
    assert(isFull());
    // Circular Implementation
    back_element = (back_element + 1) % max_size;
    current_size++;

    queue_array[back_element] = new_element;
}

template <class Type>
void FiniteQueue<Type>::remove() {
    assert(isEmpty);

    current_size--;
    front_element = (front_element + 1) % max_size;
}
