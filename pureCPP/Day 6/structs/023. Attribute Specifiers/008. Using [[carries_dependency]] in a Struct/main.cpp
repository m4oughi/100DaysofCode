#include <iostream>

struct [[carries_dependency]] Data {
    int value;
};

int main() {
    Data d{10};
    std::cout << "Value: " << d.value << std::endl;

    return 0;
}
