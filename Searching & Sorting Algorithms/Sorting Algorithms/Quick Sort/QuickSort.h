template <class Type>
class QuickSort {
    public:
        void sort(Type[], int, int);
    private:
        int getPartitionIndex(Type[], int, int);
        void swapElements(Type[], int, int);
};