#include <iostream>
using namespace std;

class Animal {
public:
    void makeSound() {
        cout << "Some generic animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "Woof Woof" << endl;
    }
};

int main() {
    Dog dog;
    dog.makeSound();  // Calls the overridden method in Dog
    return 0;
}
