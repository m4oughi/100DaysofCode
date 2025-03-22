#include <iostream>
#include <string>

struct Person {
    std::string name;
    int age;
};

int main() {
    Person p{"Alice", 25};

    auto [n, a] = p;

    std::cout << "Name: " << n << ", Age: " << a << '\n';
    return 0;
}
