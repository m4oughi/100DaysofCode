#include <iostream>
using namespace std;

class Alpha {
private:
    int alphaValue;

public:
    Alpha(int value) : alphaValue(value) {}

    // Declare Beta as a friend class
    friend class Beta;
};

class Gamma {
private:
    int gammaValue;

public:
    Gamma(int value) : gammaValue(value) {}

    // Declare Beta as a friend class
    friend class Beta;
};

class Beta {
public:
    void showValues(Alpha& a, Gamma& g) {
        cout << "Alpha Value: " << a.alphaValue << endl;  // Access private member of Alpha
        cout << "Gamma Value: " << g.gammaValue << endl;  // Access private member of Gamma
    }
};

int main() {
    Alpha a(50);
    Gamma g(100);
    Beta b;
    b.showValues(a, g);  // Beta accessing private members of both Alpha and Gamma
    return 0;
}
