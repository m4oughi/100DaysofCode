#include <iostream>
using namespace std;

class MyClass {
public:
    int* data;

    MyClass() {
        data = nullptr; // initialize pointer to null
    }

    void allocateData() {
        if (data == nullptr) {
            data = new int(50); // allocate memory if null
        }
    }

    void displayData() {
        if (data != nullptr) {
            cout << "Data: " << *data << endl;
        } else {
            cout << "Data is not allocated." << endl;
        }
    }

    ~MyClass() {
        delete data; // clean up memory
    }
};

int main() {
    MyClass obj;
    obj.displayData(); // data is not allocated
    obj.allocateData(); // allocate memory
    obj.displayData(); // now data is available

    return 0;
}
