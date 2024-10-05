#include <iostream>
using namespace std;

class Flyable {
public:
    virtual void move() = 0;  // Pure virtual function
};

class Swimmable {
public:
    virtual void move() = 0;  // Pure virtual function
};

class Amphibian : public Flyable, public Swimmable {
public:
    void move() override {
        cout << "Amphibian moving both in water and air" << endl;
    }
};

int main() {
    Amphibian obj;
    obj.move();
    return 0;
}
