template <class Type>
class SelectionSort {
    public:
        void sort(Type[], int);
    private:
        int getSmallestElement(Type[], int, int);
        void swapElements(Type[], int, int);
};