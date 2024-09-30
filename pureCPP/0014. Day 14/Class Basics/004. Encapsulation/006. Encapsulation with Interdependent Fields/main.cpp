#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double width;
    double height;

public:
    void setDimensions(double l, double w, double h) {
        if (l > 0 && w > 0 && h > 0) {
            length = l;
            width = w;
            height = h;
        } else {
            cout << "Invalid dimensions!" << endl;
        }
    }

    double calculateVolume() {
        return length * width * height;
    }
};

int main() {
    Box box;
    box.setDimensions(5.0, 4.0, 3.0);

    cout << "Volume: " << box.calculateVolume() << endl;
    return 0;
}
