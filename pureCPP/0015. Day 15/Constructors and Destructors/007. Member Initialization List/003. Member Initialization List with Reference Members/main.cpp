#include <iostream>

class Line {
private:
    int& length;
public:
    // Member initialization list for reference member
    Line(int& len) : length(len) {
        std::cout << "Line initialized with length = " << length << std::endl;
    }
};

int main() {
    int len = 100;
    Line l(len);  // Initializes reference to len
    return 0;
}
