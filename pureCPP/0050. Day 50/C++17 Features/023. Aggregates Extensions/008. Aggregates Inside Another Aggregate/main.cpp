#include <iostream>

struct Address {
    std::string city;
    int zip;
};

struct Person {
    std::string name;
    Address address;
};

int main() {
    Person p{"John", {"New York", 10001}};
    std::cout << p.name << " lives in " << p.address.city << ", ZIP: " << p.address.zip << "\n";
    return 0;
}
