#include "../Queue.h"

template <class Type>
// FiniteQueue is simply an array-based implementation.
class FiniteQueue: public Queue {
    public:
        // Construction
        FiniteQueue(int);
        FiniteQueue();
        // Destruction
        ~FiniteQueue();
        // Methods
        bool isEmpty() const;
        bool isFull() const;
        void init(int);
        Type front() const;
        Type back() const;
        void add(const Type&);
        void remove();
    private:
        int max_size;
        int current_size;
        int front_element;
        int back_element;
        Type* queue_array;
};