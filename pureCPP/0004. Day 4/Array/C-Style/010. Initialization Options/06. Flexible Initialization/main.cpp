#include <initializer_list>
#include <iostream>

class FlexibleArray {
private:
    int* arr;
    int size;

public:
    // Constructor using std::initializer_list
    FlexibleArray(std::initializer_list<int> list) : size(list.size()) {
        arr = new int[size];
        int i = 0;
        for (int value : list) {
            arr[i++] = value;
        }
    }

    ~FlexibleArray() {
        delete[] arr;
    }

    void print() const {
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    FlexibleArray array = {1, 2, 3, 4, 5};  // Initialize using initializer_list

    array.print();  // Outputs: 1 2 3 4 5
}
