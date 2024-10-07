#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;   // Pure virtual function
    virtual void move() = 0;    // Pure virtual function
};

class Bird : public Animal {
public:
    void sound() override {
        cout << "Chirp Chirp" << endl;
    }

    void move() override {
        cout << "Bird is flying" << endl;
    }
};

int main() {
    Bird bird;
    bird.sound();  // Calls Bird's sound method
    bird.move();   // Calls Bird's move method

    return 0;
}
