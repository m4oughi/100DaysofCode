#include <iostream>
using namespace std;

// Base class
class Animal {
private:
    int age = 5;

public:
    friend class Dog;  // Dog is a friend class, so it can access private members
};

// Derived class
class Dog : public Animal {
public:
    void showAge() {
        cout << "Dog's age: " << age << endl;  // Accessing private member because Dog is a friend class
    }
};

int main() {
    Dog myDog;
    myDog.showAge();  // Accesses private member age directly
    return 0;
}
