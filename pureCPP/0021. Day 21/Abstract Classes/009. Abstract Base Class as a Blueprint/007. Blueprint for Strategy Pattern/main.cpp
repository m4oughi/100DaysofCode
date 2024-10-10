#include <iostream>
using namespace std;

// Abstract Base Class (Blueprint)
class SortStrategy {
public:
    virtual void sort(int arr[], int size) = 0;
};

class BubbleSort : public SortStrategy {
public:
    void sort(int arr[], int size) override {
        cout << "Sorting using BubbleSort" << endl;
        // Implementation of BubbleSort algorithm
    }
};

class QuickSort : public SortStrategy {
public:
    void sort(int arr[], int size) override {
        cout << "Sorting using QuickSort" << endl;
        // Implementation of QuickSort algorithm
    }
};

class Sorter {
private:
    SortStrategy* strategy;
public:
    Sorter(SortStrategy* strategy) : strategy(strategy) {}
    
    void sortArray(int arr[], int size) {
        strategy->sort(arr, size);
    }
};

int main() {
    int arr[] = {4, 2, 7, 1, 9};

    Sorter bubbleSorter(new BubbleSort());
    bubbleSorter.sortArray(arr, 5);  // Outputs "Sorting using BubbleSort"

    Sorter quickSorter(new QuickSort());
    quickSorter.sortArray(arr, 5);  // Outputs "Sorting using QuickSort"

    delete bubbleSorter;  // Clean up resources
    delete quickSorter;   // Clean up resources

    return 0;
}
