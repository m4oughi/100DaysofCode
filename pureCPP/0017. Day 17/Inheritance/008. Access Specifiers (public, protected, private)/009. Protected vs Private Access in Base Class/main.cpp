#include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    int legs = 4;

private:
    int age = 5;

public:
    int getAge() {
        return age;
    }
};

// Derived class
class Dog : public Animal {
public:
    void showDetails() {
        cout << "Dog has " << legs << " legs." << endl;  // Accessible because it's protected
        cout << "Dog's age: " << getAge() << endl;       // Accessing private member through public method
    }
};

int main() {
    Dog myDog;
    myDog.showDetails();  // Displays both legs (protected) and age (through getter)
    return 0;
}
