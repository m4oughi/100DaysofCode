#include <iostream>
#include <tuple>

struct Person {
    std::string name;
    int age;
};

int main() {
    std::tuple<Person, double> myTuple{ {"Alice", 25}, 3.14 };

    std::cout << "Person: " << std::get<Person>(myTuple).name << ", Age: " 
              << std::get<Person>(myTuple).age << "\n";

    return 0;
}
