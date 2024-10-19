#include <iostream>
using namespace std;

class Animal {
public:
    Animal() {
        cout << "Animal created." << endl;
    }

    virtual ~Animal() {
        cout << "Animal destroyed." << endl;
    }
};

class Bird : public Animal {
public:
    Bird() {
        cout << "Bird created." << endl;
    }

    ~Bird() {
        cout << "Bird destroyed." << endl;
    }
};

int main() {
    Animal* animalPtr = new Bird();  // Upcasting: Bird* to Animal*
    delete animalPtr;  // Correctly calls Bird destructor due to virtual destructor

    return 0;
}
