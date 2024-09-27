#include <iostream>
using namespace std;

template <typename T1 = int, typename T2 = double>
class Pair {
    T1 first;
    T2 second;
public:
    Pair(T1 a, T2 b) : first(a), second(b) {}
    void display() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main() {
    Pair<> p1(10, 3.14);      // Uses default int and double types
    Pair<int, int> p2(100, 200);  // Explicitly uses int for both types
    p1.display();
    p2.display();
    return 0;
}
