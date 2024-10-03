#include <iostream>
using namespace std;

class UniquePointer {
    int* data;
public:
    UniquePointer(int value) : data(new int(value)) {}

    UniquePointer& operator=(UniquePointer&& other) noexcept {
        if (this == &other) return *this;  // Self-assignment check

        delete data;  // Clean up old resource

        data = other.data;  // Transfer ownership
        other.data = nullptr;

        return *this;
    }

    void display() const {
        if (data) {
            cout << "Value: " << *data << endl;
        } else {
            cout << "No data" << endl;
        }
    }

    ~UniquePointer() {
        delete data;
    }
};

int main() {
    UniquePointer p1(100), p2(200);
    p2 = std::move(p1);  // Move assignment
    p2.display();  // Output: Value: 100
    p1.display();  // Output: No data
    return 0;
}
