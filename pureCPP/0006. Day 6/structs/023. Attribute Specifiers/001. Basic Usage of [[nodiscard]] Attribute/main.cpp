#include <iostream>

struct [[nodiscard]] Data {
    int value;
};

int main() {
    Data d{10};
    // This will generate a warning because the result of `d` is not used
    // d;
    
    return 0;
}
