#include <iostream>

struct Data {
    int value;
};

void process(Data d) {
    switch (d.value) {
        case 1:
            std::cout << "Value is 1" << std::endl;
            [[fallthrough]];
        case 2:
            std::cout << "Value is 2" << std::endl;
            break;
        default:
            std::cout << "Default case" << std::endl;
            break;
    }
}

int main() {
    Data d{1};
    process(d);

    return 0;
}
