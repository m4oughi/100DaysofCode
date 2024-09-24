#include <iostream>
#include <string>

struct Data {
    union {
        int intValue;
        float floatValue;
        std::string stringValue;
    };
    char type;

    Data() : intValue(0), type('i') {}  // Default constructor

    Data(int val) : intValue(val), type('i') {}
    Data(float val) : floatValue(val), type('f') {}
    Data(const std::string& val) : stringValue(val), type('s') {}

    Data(const Data& other) {
        type = other.type;
        if (type == 'i') {
            intValue = other.intValue;
        } else if (type == 'f') {
            floatValue = other.floatValue;
        } else if (type == 's') {
            new(&stringValue) std::string(other.stringValue);  // Use placement new for string
        }
    }

    ~Data() {
        if (type == 's') {
            stringValue.~string();  // Properly destroy string
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
    Data data1(42);
    print(data1);

    Data data2(std::string("Advanced Union!"));
    print(data2);

    Data data3 = data2;  // Copy constructor handles string correctly
    print(data3);

    return 0;
}
