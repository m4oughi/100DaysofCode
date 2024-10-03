#include <iostream>
using namespace std;

class Resource {
    int* data;
    int* refCount;  // Reference counter
public:
    Resource(int value) {
        data = new int(value);
        refCount = new int(1);  // Initialize reference count
    }

    Resource& operator=(const Resource& other) {
        if (this == &other) return *this;  // Self-assignment check

        // Decrease old resource's reference count
        if (--(*refCount) == 0) {
            delete data;
            delete refCount;
        }

        // Copy the new resource
        data = other.data;
        refCount = other.refCount;
        ++(*refCount);  // Increase reference count

        return *this;
    }

    void display() const {
        cout << "Value: " << *data << ", RefCount: " << *refCount << endl;
    }

    ~Resource() {
        if (--(*refCount) == 0) {  // Destroy resource if no references left
            delete data;
            delete refCount;
        }
    }
};

int main() {
    Resource r1(100);
    Resource r2(200);
    r2 = r1;  // Assignment with reference counting
    r1.display();  // Output: Value: 100, RefCount: 2
    r2.display();  // Output: Value: 100, RefCount: 2
    return 0;
}
