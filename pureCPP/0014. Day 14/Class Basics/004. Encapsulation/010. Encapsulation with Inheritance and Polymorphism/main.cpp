#include <iostream>
using namespace std;

class Animal {
private:
    string name;

protected:
    void setName(string n) {
        name = n;
    }

public:
    virtual void speak() = 0;

    string getName() const {
        return name;
    }
};

class Dog : public Animal {
public:
    Dog(string n) {
        setName(n);
    }

    void speak() override {
        cout << getName() << " says: Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    Cat(string n) {
        setName(n);
    }

    void speak() override {
        cout << getName() << " says: Meow!" << endl;
    }
};

int main() {
    Dog dog("Buddy");
    Cat cat("Whiskers");

    dog.speak();
    cat.speak();

    return 0;
}
