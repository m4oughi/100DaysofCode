#include <iostream>
using namespace std;

void greet(string name, string greeting = "Hello") {
    cout << greeting << ", " << name << "!" << endl;
}

void greet(string name, int age) {
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
}

int main() {
    greet("Alice");           // Calls greet(string, string) with default parameter
    greet("Bob", "Welcome");  // Calls greet(string, string)
    greet("Charlie", 30);     // Calls greet(string, int)
    return 0;
}
