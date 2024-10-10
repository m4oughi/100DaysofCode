#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() = 0;  // Pure virtual function
};

int main() {
    // Trying to instantiate an abstract class results in a compilation error
    // Animal animal;  // Error: cannot declare variable 'animal' to be of abstract type 'Animal'
    return 0;
}
