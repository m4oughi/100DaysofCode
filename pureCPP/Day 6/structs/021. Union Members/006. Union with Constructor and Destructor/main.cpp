#include <iostream>

struct Data {
    union {
        int intValue;
        float floatValue;
    };
    char type;

    Data(int val) : intValue(val), type('i') {}
    Data(float val) : floatValue(val), type('f') {}

    ~Data() {}  // No specific cleanup needed for these types
};

void print(const Data& data) {
    if (data.type == 'i') {
        std::cout << "Integer: " << data.intValue << std::endl;
    } else if (data.type == 'f') {
        std::cout << "Float: " << data.floatValue << std::endl;
    }
}

int main() {
    Data data1(100);
    print(data1);

    Data data2(3.14f);
    print(data2);

    return 0;
}
