#include <iostream>
using namespace std;

class Distance {
    int feet;
    int inches;

public:
    Distance(int f = 0, int i = 0) : feet(f), inches(i) {}

    friend Distance addDistances(const Distance &d1, const Distance &d2);  // Friend function
    void display() const {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

Distance addDistances(const Distance &d1, const Distance &d2) {
    Distance temp;
    temp.inches = d1.inches + d2.inches;
    temp.feet = d1.feet + d2.feet + (temp.inches / 12);
    temp.inches %= 12;
    return temp;
}

int main() {
    Distance d1(5, 9);
    Distance d2(3, 11);
    Distance d3 = addDistances(d1, d2);  // Objects passed as arguments to a friend function

    d3.display();

    return 0;
}
