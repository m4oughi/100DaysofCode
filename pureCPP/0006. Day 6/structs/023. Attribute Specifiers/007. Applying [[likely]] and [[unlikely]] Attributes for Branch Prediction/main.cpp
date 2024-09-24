#include <iostream>

struct Data {
    int value;
};

void process(Data d) {
    if ([[likely]] d.value == 1) {
        std::cout << "Likely path: Value is 1" << std::endl;
    } else if ([[unlikely]] d.value == 2) {
        std::cout << "Unlikely path: Value is 2" << std::endl;
    } else {
        std::cout << "Default case" << std::endl;
    }
}

int main() {
    Data d{1};
    process(d);

    return 0;
}
