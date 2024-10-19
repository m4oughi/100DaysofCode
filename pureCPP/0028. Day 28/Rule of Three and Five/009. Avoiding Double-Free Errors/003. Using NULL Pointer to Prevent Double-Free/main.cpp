#include <iostream>

class SafeDestructor {
    int* data;
public:
    SafeDestructor(int value) {
        data = new int(value);
        std::cout << "Resource allocated (SafeDestructor)!" << std::endl;
    }

    ~SafeDestructor() {
        if (data) {
            delete data;
            std::cout << "Resource deallocated (SafeDestructor)!" << std::endl;
        }
        data = nullptr;  // Avoid double-free by nullifying the pointer
    }

    void display() const {
        if (data)
            std::cout << "Data: " << *data << std::endl;
        else
            std::cout << "Data has been deleted!" << std::endl;
    }
};

int main() {
    SafeDestructor obj1(42);
    obj1.display();
    obj1.~SafeDestructor();  // Manual call to destructor (bad practice, but for illustration)
    obj1.~SafeDestructor();  // Safe because pointer is null, avoids double-free

    return 0;
}
