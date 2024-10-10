#include <iostream>
using namespace std;

// Abstract Class 1 (Interface)
class Renderer {
public:
    virtual void render() = 0;
};

// Abstract Class 2 (Interface)
class Movable {
public:
    virtual void move() = 0;
};

// Derived Class
class GameCharacter : public Renderer, public Movable {
public:
    void render() override {
        cout << "Rendering game character!" << endl;
    }
    void move() override {
        cout << "Game character is moving!" << endl;
    }
};

int main() {
    GameCharacter character;
    
    Renderer* renderer = &character;
    Movable* movable = &character;

    renderer->render();   // Outputs: Rendering game character!
    movable->move();      // Outputs: Game character is moving!

    return 0;
}
