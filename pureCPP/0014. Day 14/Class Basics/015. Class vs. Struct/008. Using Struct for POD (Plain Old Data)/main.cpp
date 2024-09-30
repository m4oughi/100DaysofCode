#include <iostream>
using namespace std;

struct Color {
    int red, green, blue;  // Plain Old Data (POD)
};

class ColorClass {
private:
    int red, green, blue;
public:
    ColorClass(int r, int g, int b) : red(r), green(g), blue(b) {}

    void display() const {
        cout << "Red: " << red << ", Green: " << green << ", Blue: " << blue << endl;
    }
};

int main() {
    Color c = {255, 0, 0};  // Direct initialization in struct (POD)
    cout << "Struct Color - Red: " << c.red << ", Green: " << c.green << ", Blue: " << c.blue << endl;

    ColorClass cc(0, 255, 0);
    cc.display();

    return 0;
}
