#include <iostream>

template <typename... Args>
struct VariadicTemplate {
    void print() const {
        std::cout << "Template with multiple parameters\n";
    }
};

int main() {
    VariadicTemplate<int, double, char> obj;
    obj.print();
}
