#include <iostream>

class Add {
public:
    int operator()(int a, int b) const {
        return a + b;
    }
};

int main() {
    Add add;
    std::cout << "10 + 20 = " << add(10, 20) << "\n";
    return 0;
}
