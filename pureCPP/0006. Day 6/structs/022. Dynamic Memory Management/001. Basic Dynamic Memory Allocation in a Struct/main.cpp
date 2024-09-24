#include <iostream>

struct Data {
    int* value;

    Data(int v) {
        value = new int(v);  // Allocate memory dynamically
    }

    ~Data() {
        delete value;  // Free allocated memory
    }
};

int main() {
    Data data(10);
    std::cout << "Value: " << *data.value << std::endl;

    return 0;
}
