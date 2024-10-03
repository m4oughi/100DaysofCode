#include <iostream>
using namespace std;

class Resource {
    int* data;
public:
    Resource(int value) : data(new int(value)) {}

    // Copy constructor
    Resource(const Resource& other) : data(new int(*other.data)) {}

    // Swap function
    void swap(Resource& other) noexcept {
        std::swap(data, other.data);
    }

    // Copy-and-swap assignment operator
    Resource& operator=(Resource other) {
        swap(other);  // Swap current object with the copy
        return *this;
    }

    void display() const {
        cout << "Value: " << *data << endl;
    }

    ~Resource() {
        delete data;
    }
};

int main() {
    Resource r1(100), r2(200);
    r2 = r1;  // Copy-and-swap assignment
    r2.display();  // Output: Value: 100
    return 0;
}
