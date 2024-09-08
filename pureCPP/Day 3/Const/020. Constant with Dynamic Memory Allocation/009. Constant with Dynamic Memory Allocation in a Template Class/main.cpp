#include <iostream>

template <int Size>
class DynamicArray {
public:
    DynamicArray() {
        array = new int[Size];
    }

    ~DynamicArray() {
        delete[] array;
    }

    void fillArray() {
        for (int i = 0; i < Size; ++i) {
            array[i] = i * 2;
        }
    }

    void printArray() const {
        for (int i = 0; i < Size; ++i) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    }

private:
    int* array;
};

int main() {
    DynamicArray<6> obj;
    obj.fillArray();
    obj.printArray(); // Prints 0 2 4 6 8 10
}
