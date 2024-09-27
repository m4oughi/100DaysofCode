#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
    T1 first;
    T2 second;
public:
    Pair(T1 a, T2 b) : first(a), second(b) {}
    void display() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

// Partial specialization when both types are the same
template <typename T>
class Pair<T, T> {
    T first;
    T second;
public:
    Pair(T a, T b) : first(a), second(b) {}
    void display() {
        cout << "Same types: " << first << ", " << second << endl;
    }
};

int main() {
    Pair<int, double> p1(10, 20.5);   // General template instantiation
    Pair<int, int> p2(5, 10);         // Uses partially specialized version
    p1.display();
    p2.display();
    return 0;
}
