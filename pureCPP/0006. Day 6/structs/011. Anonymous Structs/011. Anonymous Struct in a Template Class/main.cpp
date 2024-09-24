#include <iostream>

template <typename T>
class Container {
public:
    struct {
        T data;
        int id;
    };

    Container(T value, int idValue) : data(value), id(idValue) {}

    void print() const {
        std::cout << "Data: " << data << ", ID: " << id << std::endl;
    }
};

int main() {
    Container<int> c(42, 1);
    c.print();

    Container<std::string> c2("Hello", 2);
    c2.print();
}
