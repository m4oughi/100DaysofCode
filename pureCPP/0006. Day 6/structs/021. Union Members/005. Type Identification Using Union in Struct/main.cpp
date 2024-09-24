#include <iostream>

struct Data {
    union {
        int intValue;
        float floatValue;
    };
    char type;  // 'i' for int, 'f' for float
};

void print(const Data& data) {
    if (data.type == 'i') {
        std::cout << "Integer: " << data.intValue << std::endl;
    } else if (data.type == 'f') {
        std::cout << "Float: " << data.floatValue << std::endl;
    }
}

int main() {
    Data data;
    
    data.intValue = 42;
    data.type = 'i';
    print(data);

    data.floatValue = 3.14f;
    data.type = 'f';
    print(data);

    return 0;
}
