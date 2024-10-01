#include <iostream>

class ComplexResource {
private:
    int* data1;
    int* data2;
    int size;
public:
    // Parameterized constructor
    ComplexResource(int s) : size(s) {
        data1 = new int[size];
        data2 = new int[size];
        std::cout << "ComplexResource of size " << size << " created." << std::endl;
    }

    // Move constructor
    ComplexResource(ComplexResource&& other) noexcept : data1(other.data1), data2(other.data2), size(other.size) {
        other.data1 = nullptr;
        other.data2 = nullptr;
        other.size = 0;
        std::cout << "ComplexResource moved." << std::endl;
    }

    // Destructor
    ~ComplexResource() {
        delete[] data1;
        delete[] data2;
        std::cout << "ComplexResource memory deallocated." << std::endl;
    }
};

int main() {
    ComplexResource res1(15);
    ComplexResource res2 = std::move(res1);  // Move constructor is called
    return 0;
}
