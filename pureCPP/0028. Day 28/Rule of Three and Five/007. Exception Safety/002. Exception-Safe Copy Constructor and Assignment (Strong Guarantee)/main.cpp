#include <iostream>
#include <stdexcept>

class SafeCopyRAII {
    int* data;
public:
    SafeCopyRAII(int value) : data(new int(value)) {
        std::cout << "Resource allocated!" << std::endl;
    }

    // Copy Constructor
    SafeCopyRAII(const SafeCopyRAII& other) : data(new int(*other.data)) {
        std::cout << "Copy constructor called!" << std::endl;
    }

    // Copy Assignment Operator
    SafeCopyRAII& operator=(const SafeCopyRAII& other) {
        if (this != &other) {
            int* temp = new int(*other.data);  // Exception could occur here
            delete data;
            data = temp;
            std::cout << "Copy assignment operator called!" << std::endl;
        }
        return *this;
    }

    ~SafeCopyRAII() {
        delete data;
        std::cout << "Resource deallocated!" << std::endl;
    }

    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    try {
        SafeCopyRAII obj1(100);
        SafeCopyRAII obj2 = obj1;  // Copy constructor
        obj2.display();

        SafeCopyRAII obj3(200);
        obj3 = obj1;  // Copy assignment operator
        obj3.display();
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }  // Resources are properly cleaned up even in case of exceptions
    return 0;
}
