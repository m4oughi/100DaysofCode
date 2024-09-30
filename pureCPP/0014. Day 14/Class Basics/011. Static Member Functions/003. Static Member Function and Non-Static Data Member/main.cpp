#include <iostream>
using namespace std;

class Test {
private:
    int number;  // Non-static data member
    static int count;  // Static data member

public:
    Test(int n) : number(n) {
        count++;
    }

    static int getCount() {
        // Static member function cannot access non-static data members directly
        // return number;  // This will cause a compilation error
        return count;
    }
};

// Initialize static data member
int Test::count = 0;

int main() {
    Test t1(10);
    Test t2(20);

    cout << "Count: " << Test::getCount() << endl;
    return 0;
}
