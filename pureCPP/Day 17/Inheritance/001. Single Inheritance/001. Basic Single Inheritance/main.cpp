#include <iostream>
using namespace std;

class Animal {
public:
    void speak() {
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal {
};

int main() {
    Dog myDog;
    myDog.speak(); // Inherits speak() from Animal
    return 0;
}
