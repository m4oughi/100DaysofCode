#include <iostream>

// Callback function
void callbackFunction(int value) {
    std::cout << "Callback called with value: " << value << std::endl;
}

// Function accepting a callback
void performOperation(int x, void (*callback)(int)) {
    int result = x * 2;
    callback(result);  // Invoke the callback with the result
}

int main() {
    performOperation(10, callbackFunction);  // Pass 'callbackFunction' as a callback
    return 0;
}
