#include <iostream>

struct Data {
    int* value;

    Data(int v) {
        value = new int(v);
    }

    Data(const Data& other) {
        value = new int(*other.value);
    }

    Data& operator=(const Data& other) {
        if (this != &other) {
            delete value;
            value = new int(*other.value);  // Deep copy
        }
        return *this;
    }

    ~Data() {
        delete value;
    }
};

int main() {
    Data data1(10);
    Data data2(20);
    data2 = data1;  // Deep copy using assignment operator

    std::cout << "Data1: " << *data1.value << std::endl;
    std::cout << "Data2: " << *data2.value << std::endl;

    return 0;
}
