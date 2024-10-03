#include <iostream>
using namespace std;

class Person {
    int age;
public:
    Person(int a) : age(a) {}

    bool operator<(const Person& other) const {
        return age < other.age;
    }

    bool operator>(const Person& other) const {
        return age > other.age;
    }

    bool operator==(const Person& other) const {
        return age == other.age;
    }

    void display() const {
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person p1(30), p2(40), p3(30);

    cout << (p1 < p2) << endl;  // Output: 1 (true)
    cout << (p2 > p1) << endl;  // Output: 1 (true)
    cout << (p1 == p3) << endl; // Output: 1 (true)
    
    if (p1 < p2 && p2 > p3 && p1 == p3) {
        cout << "Chained comparison is true" << endl;  // Output: Chained comparison is true
    }

    return 0;
}
