#include <iostream>

class MemoryRAII {
    int* data;
public:
    MemoryRAII(int value) {
        data = new int(value);
        std::cout << "Memory allocated!" << std::endl;
    }

    ~MemoryRAII() {
        delete data;
        std::cout << "Memory deallocated!" << std::endl;
    }

    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    {
        MemoryRAII obj(42);
        obj.display();
    }  // Memory is automatically released when the object goes out of scope
    return 0;
}
