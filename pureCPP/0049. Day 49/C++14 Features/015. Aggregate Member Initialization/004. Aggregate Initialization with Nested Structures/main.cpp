#include <iostream>

struct Address {
    std::string city = "Unknown";
    int zip = 00000;
};

struct Person {
    std::string name = "John Doe";
    int age = 30;
    Address address{};
};

int main() {
    Person p1{};  // Uses default values
    Person p2{"Alice", 25, {"New York", 10001}};  // Overrides nested structure

    std::cout << "Person 1: " << p1.name << ", Age: " << p1.age 
              << ", City: " << p1.address.city << ", ZIP: " << p1.address.zip << "\n";

    std::cout << "Person 2: " << p2.name << ", Age: " << p2.age 
              << ", City: " << p2.address.city << ", ZIP: " << p2.address.zip << "\n";

    return 0;
}
