#include <iostream>
using namespace std;

class DynamicArray {
private:
    int *arr;
    int size;

public:
    // Constructor for dynamic memory allocation
    DynamicArray(int s) : size(s) {
        arr = new int[size];
        cout << "Array of size " << size << " created." << endl;
    }

    // Destructor to release memory
    ~DynamicArray() {
        delete[] arr;
        cout << "Array destroyed and memory freed." << endl;
    }
};

int main() {
    DynamicArray dArray(5);  // Constructor called
    return 0;  // Destructor called when object goes out of scope
}
