#include <iostream>

class MultiResourceMove {
    int* data;
    int* array;
    size_t size;
public:
    MultiResourceMove(int value, size_t arraySize) : size(arraySize) {
        data = new int(value);
        array = new int[size];
        for (size_t i = 0; i < size; ++i) {
            array[i] = i;
        }
        std::cout << "Constructor called!" << std::endl;
    }

    // Move Constructor
    MultiResourceMove(MultiResourceMove&& other) noexcept {
        data = other.data;  // Transfer ownership of single resource
        array = other.array;  // Transfer ownership of array
        size = other.size;
        other.data = nullptr;
        other.array = nullptr;
        other.size = 0;
        std::cout << "Move Constructor called!" << std::endl;
    }

    ~MultiResourceMove() {
        delete data;
        delete[] array;
        std::cout << "Destructor called!" << std::endl;
    }

    void display() const {
        if (data)
            std::cout << "Data: " << *data << std::endl;
        else
            std::cout << "Data is null" << std::endl;

        if (array) {
            std::cout << "Array: ";
            for (size_t i = 0; i < size; ++i) {
                std::cout << array[i] << " ";
            }
            std::cout << std::endl;
        } else {
            std::cout << "Array is null" << std::endl;
        }
    }
};

int main() {
    MultiResourceMove obj1(70, 5);
    MultiResourceMove obj2 = std::move(obj1);  // Move constructor
    obj2.display();
    obj1.display();  // Moved-from object is in null state
    return 0;
}
