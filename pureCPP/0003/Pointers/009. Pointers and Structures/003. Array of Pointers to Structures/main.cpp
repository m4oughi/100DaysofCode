#include <iostream>

struct Person {
    std::string name;
    int age;
};

int main() {
    Person* people[2];

    people[0] = new Person{"Charlie", 22};
    people[1] = new Person{"Diana", 29};

    for (int i = 0; i < 2; ++i) {
        std::cout << "Name: " << people[i]->name << ", Age: " << people[i]->age << std::endl;
        delete people[i]; // Free each dynamically allocated memory block
    }

    return 0;
}

