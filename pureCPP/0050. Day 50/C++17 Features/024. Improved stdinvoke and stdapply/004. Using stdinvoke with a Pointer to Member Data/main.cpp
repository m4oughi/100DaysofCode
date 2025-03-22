#include <iostream>
#include <functional>

struct Person {
    std::string name;
};

int main() {
    Person p{"Alice"};
    auto name = std::invoke(&Person::name, p); // Accesses p.name
    
    std::cout << "Person's Name: " << name << "\n";
    return 0;
}
