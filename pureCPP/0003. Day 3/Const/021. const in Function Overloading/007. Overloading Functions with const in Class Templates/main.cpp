#include <iostream>

template <typename T>
class MyTemplate {
public:
    void process(const T& value) const {
        std::cout << "Const template parameter: " << value << std::endl;
    }

    void process(T& value) {
        std::cout << "Non-const template parameter: " << value << std::endl;
    }
};

int main() {
    MyTemplate<int> obj;
    int a = 50;
    const int b = 60;

    obj.process(a); // Calls process(T&)
    obj.process(b); // Calls process(const T&) const
}
