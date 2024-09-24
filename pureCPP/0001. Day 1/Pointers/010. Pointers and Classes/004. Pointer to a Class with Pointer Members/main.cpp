#include <iostream>

class Person {
public:
    std::string* name;
    int* age;

    Person(std::string n, int a) {
        name = new std::string(n);
        age = new int(a);
    }

    ~Person() {  // Destructor to free allocated memory
        delete name;
        delete age;
    }

    void display() {
        std::cout << "Name: " << *name << ", Age: " << *age << std::endl;
    }
};

int main() {
    Person* ptr = new Person("Eve", 28);

    ptr->display();  // Access member function

    delete ptr;  // Destructor called to free dynamically allocated memory

    return 0;
}
