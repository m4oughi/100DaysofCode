#include <iostream>
#include <functional>  // For std::function
using namespace std;

class ConfigurableOperation {
    std::function<int(int)> operation;  // Function to hold the current operation
public:
    // Constructor to set default operation to identity function
    ConfigurableOperation() : operation([](int x) { return x; }) {}

    // Overloading the function call operator
    int operator()(int x) {
        return operation(x);  // Call the current operation
    }

    // Method to change the operation to square
    void setSquare() {
        operation = [](int x) { return x * x; };  // Set to square operation
    }

    // Method to change the operation to double
    void setDouble() {
        operation = [](int x) { return x * 2; };  // Set to double operation
    }
};

int main() {
    ConfigurableOperation op;  // Create a ConfigurableOperation object
    cout << "Default operation on 5 = " << op(5) << endl;  // Output: Default operation on 5 = 5

    op.setSquare();  // Change operation to square
    cout << "Square of 5 = " << op(5) << endl;  // Output: Square of 5 = 25

    op.setDouble();  // Change operation to double
    cout << "Double of 5 = " << op(5) << endl;  // Output: Double of 5 = 10

    return 0;
}
