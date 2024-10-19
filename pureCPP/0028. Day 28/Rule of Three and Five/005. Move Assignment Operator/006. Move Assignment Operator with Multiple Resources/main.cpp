#include <iostream>

class MultiResourceMoveAssignment {
    int* data;
    int* array;
    size_t size;
public:
    MultiResourceMoveAssignment(int value, size_t arraySize) : size(arraySize) {
        data = new int(value);
        array = new int[size];
        for (size_t i = 0; i < size; ++i) {
            array[i] = i;
        }
        std::cout << "Constructor called!" << std::endl;
    }

    // Move Assignment Operator
    MultiResourceMoveAssignment& operator=(MultiResourceMoveAssignment&& other) noexcept {
        if (this != &other) {
            delete data;
            delete[] array;

            data = other.data;  // Transfer ownership of data
            array = other.array;  // Transfer ownership of array
            size = other.size;

            other.data = nullptr;
            other.array = nullptr;
            other.size = 0;

            std::cout << "Move Assignment Operator called!" << std::endl;
        }
        return *this;
    }

    ~MultiResourceMoveAssignment() {
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
    MultiResourceMoveAssignment obj1(120, 5);
    MultiResourceMoveAssignment obj2(130, 3);
    obj2 = std::move(obj1);  // Move assignment operator for multiple resources
    obj2.display();
    obj1.display();  // obj1 is left in a null state
    return 0;
}
