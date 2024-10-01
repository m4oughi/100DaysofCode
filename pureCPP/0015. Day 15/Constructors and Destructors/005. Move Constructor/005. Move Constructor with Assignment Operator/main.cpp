#include <iostream>

class Vector {
private:
    int* elements;
    int size;
public:
    // Parameterized constructor
    Vector(int s) : size(s) {
        elements = new int[size];
        std::cout << "Vector of size " << size << " created." << std::endl;
    }

    // Move constructor
    Vector(Vector&& other) noexcept : elements(other.elements), size(other.size) {
        other.elements = nullptr;
        other.size = 0;
        std::cout << "Vector moved (constructor)." << std::endl;
    }

    // Move assignment operator
    Vector& operator=(Vector&& other) noexcept {
        if (this != &other) {
            delete[] elements;

            elements = other.elements;
            size = other.size;

            other.elements = nullptr;
            other.size = 0;
            std::cout << "Vector moved (assignment)." << std::endl;
        }
        return *this;
    }

    // Destructor
    ~Vector() {
        delete[] elements;
        std::cout << "Vector memory deallocated." << std::endl;
    }
};

int main() {
    Vector vec1(10);
    Vector vec2 = std::move(vec1);  // Move constructor is called

    Vector vec3(5);
    vec3 = std::move(vec2);  // Move assignment operator is called
    return 0;
}
