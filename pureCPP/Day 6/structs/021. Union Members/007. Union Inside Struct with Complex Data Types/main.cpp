#include <iostream>
#include <string>

struct Data {
    union {
        int intValue;
        float floatValue;
        std::string stringValue;
    };
    char type;

    Data(int val) : intValue(val), type('i') {}
    Data(float val) : floatValue(val), type('f') {}
    Data(const std::string& val) : stringValue(val), type('s') {}

    ~Data() {
        if (type == 's') {
            stringValue.~string();  // Call destructor for string
        }
    }
};

void print(const Data& data) {
    if (data.type == 'i') {
        std::cout << "Integer: " << data.intValue << std::endl;
    } else if (data.type == 'f') {
        std::cout << "Float: " << data.floatValue << std::endl;
    } else if (data.type == 's') {
        std::cout << "String: " << data.stringValue << std::endl;
    }
}

int main() {
    Data data1(100);
    print(data1);

    Data data2(3.14f);
    print(data2);

    Data data3(std::string("Hello, world!"));
    print(data3);

    return 0;
}
