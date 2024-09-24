#include <iostream>

struct Data {
    union {
        int intValue;
        float floatValue;
    };
    char type;
};

int main() {
    Data data;
    data.intValue = 10;
    data.type = 'i';  // Marking as int

    std::cout << "Type: " << data.type << ", Value: " << data.intValue << std::endl;

    return 0;
}
