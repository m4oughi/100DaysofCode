#include <iostream>

struct Position {
    int x, y;
};

struct Velocity {
    int dx, dy;
};

struct MovableObject : public Position, public Velocity {
    std::string name;

    MovableObject(std::string n, int x, int y, int dx, int dy)
        : name(n) {
        this->x = x;
        this->y = y;
        this->dx = dx;
        this->dy = dy;
    }

    void move() {
        x += dx;
        y += dy;
    }
};


int main() {

    return 0;
}