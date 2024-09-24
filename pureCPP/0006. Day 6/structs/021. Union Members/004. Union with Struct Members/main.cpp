#include <iostream>

struct Data {
    union {
        struct {
            int x, y;
        } point;
        float radius;
    };
};

int main() {
    Data data;
    data.point.x = 5;
    data.point.y = 10;
    std::cout << "Point: (" << data.point.x << ", " << data.point.y << ")" << std::endl;

    data.radius = 7.5f;
    std::cout << "Radius: " << data.radius << std::endl;

    return 0;
}
