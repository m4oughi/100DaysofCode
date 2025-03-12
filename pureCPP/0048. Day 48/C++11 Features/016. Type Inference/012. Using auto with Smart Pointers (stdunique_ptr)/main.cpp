#include <iostream>
#include <memory>

class Sample {
public:
    void show() { std::cout << "Sample class\n"; }
};

int main() {
    auto ptr = std::make_unique<Sample>();
    ptr->show();

    return 0;
}
