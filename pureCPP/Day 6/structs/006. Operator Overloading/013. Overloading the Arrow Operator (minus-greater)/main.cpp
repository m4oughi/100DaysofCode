#include <iostream>
#include <string>

struct Person {
    std::string name;

    // Overloading the arrow operator
    Person* operator->() {
        return this;
    }
};

int main() {


    return 0;
}