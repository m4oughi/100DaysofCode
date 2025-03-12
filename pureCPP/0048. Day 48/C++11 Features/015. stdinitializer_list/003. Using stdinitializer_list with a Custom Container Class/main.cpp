#include <iostream>
#include <initializer_list>

class CustomArray {
private:
    int* arr;
    size_t size;

public:
    CustomArray(std::initializer_list<int> elements) {
        size = elements.size();
        arr = new int[size];
        size_t i = 0;
        for (int val : elements) {
            arr[i++] = val;
        }
    }

    void print() {
        for (size_t i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << "\n";
    }

    ~CustomArray() {
        delete[] arr;
    }
};

int main() {
    CustomArray arr = {5, 10, 15, 20};
    arr.print();
    return 0;
}
