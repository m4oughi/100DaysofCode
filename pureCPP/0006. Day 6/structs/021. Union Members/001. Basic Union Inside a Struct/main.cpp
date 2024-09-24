#include <iostream>

struct Data {
    union {
        int intValue;
        float floatValue;
    };
};

int main() {
    Data data;
    data.intValue = 42;
    std::cout << "Integer value: " << data.intValue << std::endl;

    data.floatValue = 3.14f;
    std::cout << "Float value: " << data.floatValue << std::endl;

    return 0;
}
