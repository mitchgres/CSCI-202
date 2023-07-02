template <class Type>
class Queue {
    public:
        virtual bool isEmpty() const = 0;
        virtual bool isFull() const = 0;
        virtual void init() const = 0;
        virutal Type front() const = 0;
        virtual Type back() const = 0;
        virtual void add(const Type&) const = 0;
        virtual void delete() = 0;
};