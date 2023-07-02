#include "Linked List Node/Node.h"
#include "Linked List Iterator/LinkedListIterator.h"

template <class Type>

class LinkedList {
    public:
        LinkedList();
        LinkedList(const LinkedList<Type>&);
        ~LinkedList();
        void reset();
        bool isEmpty() const;
        int length() const;
        void destroy();
        Type front() const;
        Type back() const;
        void putFront(const Type&) = 0;
        void putBack(const Type&) = 0;
        void deleteNode(const Type&) = 0;
        LinkedListIterator<Type> begin();
        LinkedListIterator<Type> end();

    protected:
        int size;
        Node<Type>* first_node_ptr;
        Node<Type>* last_node_ptr;

        void copy(const LinkedList<Type>&);
};