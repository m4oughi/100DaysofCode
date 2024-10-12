#include <iostream>
using namespace std;

class Animal {
public:
    static void sound() {
        cout << "Animals make sounds!" << endl;
    }
};

class Dog : public Animal {
    // Inherits static method from Animal
};

int main() {
    // Call static method from the base class using the derived class
    Dog::sound();  // Output: Animals make sounds!

    return 0;
}
