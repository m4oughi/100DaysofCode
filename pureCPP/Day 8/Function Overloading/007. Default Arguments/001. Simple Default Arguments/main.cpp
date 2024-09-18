#include <iostream>
using namespace std;

void greet(string name, string greeting = "Hello") {
    cout << greeting << ", " << name << "!" << endl;
}

int main() {
    greet("Alice");           // Uses default argument for greeting
    greet("Bob", "Welcome");  // Custom greeting provided
    return 0;
}
