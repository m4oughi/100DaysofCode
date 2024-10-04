#include <iostream>
using namespace std;

class Animal {
protected:
    void protectedBreathe() {
        cout << "Animal is breathing." << endl;
    }
};

class Dog : public Animal {
public:
    void breathe() {
        protectedBreathe(); // Accessing protected member of Animal
    }
};

class Cat : public Animal {
public:
    void breathe() {
        protectedBreathe(); // Accessing protected member of Animal
    }
};

int main() {
    Dog myDog;
    Cat myCat;

    myDog.breathe();
    myCat.breathe();

    return 0;
}
