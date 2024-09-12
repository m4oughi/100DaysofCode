#include <iostream>

struct Data {
    union {
        int intValue;
        float floatValue;
    } value;
};

int main() {
    Data data;
    data.value.intValue = 100;
    std::cout << "Integer value: " << data.value.intValue << std::endl;

    data.value.floatValue = 5.75f;
    std::cout << "Float value: " << data.value.floatValue << std::endl;

    return 0;
}
