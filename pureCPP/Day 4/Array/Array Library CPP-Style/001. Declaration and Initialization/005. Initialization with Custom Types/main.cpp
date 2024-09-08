#include <iostream>
#include <array>
#include <string>

struct Person {
    std::string name;
    int age;
};

int main() {
    std::array<Person, 3> people = {{{"Alice", 30}, {"Bob", 25}, {"Charlie", 40}}}; // Initializing array of structs
    
    return 0;
}