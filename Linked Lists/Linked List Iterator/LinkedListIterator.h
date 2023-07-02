#include "../Linked List Node/Node.h"

template <class Type>
class LinkedListIterator {
    public:
        LinkedListIterator();
        LinkedListIterator(Node<Type>*);
        Type operator*();
        LinkedListIterator<Type> operator++();
        bool operator==(const LinkedListIterator<Type>&) const;
        bool operator!=(const LinkedListIterator<Type>&) const;
    private:
        Node<Type>* current_node_ptr;
};