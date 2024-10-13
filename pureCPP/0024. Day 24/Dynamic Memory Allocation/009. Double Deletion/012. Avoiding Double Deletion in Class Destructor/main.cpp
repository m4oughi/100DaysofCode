#include <iostream>
using namespace std;

class MyClass {
public:
    int* data;

    MyClass() {
        data = new int(100); // dynamically allocate memory
    }

    ~MyClass() {
        if (data != nullptr) {
            delete data;
            data = nullptr; // set to null to avoid double deletion
        }
    }
};

int main() {
    MyClass obj;

    // Destructor will handle deletion safely
    return 0;
}
