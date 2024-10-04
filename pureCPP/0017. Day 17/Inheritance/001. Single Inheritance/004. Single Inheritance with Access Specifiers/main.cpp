#include <iostream>
using namespace std;

class Animal {
protected:
    void protectedSpeak() {
        cout << "Protected Animal sound." << endl;
    }
private:
    void privateSpeak() {
        cout << "Private Animal sound." << endl;
    }
public:
    void publicSpeak() {
        cout << "Public Animal sound." << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        protectedSpeak(); // Allowed: protected becomes protected in the derived class
        publicSpeak();    // Allowed: public remains public in the derived class
        // privateSpeak(); // Error: Private members are not accessible in the derived class
    }
};

int main() {
    Dog myDog;
    myDog.makeSound();
    myDog.publicSpeak(); // Can call public method directly
    return 0;
}
