#include <iostream>

class Test {
public:
    int value;
};

int main() {
    Test obj;
    decltype(obj.value) num = 50; // Deduces int

    std::cout << "Num: " << num << std::endl;
    return 0;
}
