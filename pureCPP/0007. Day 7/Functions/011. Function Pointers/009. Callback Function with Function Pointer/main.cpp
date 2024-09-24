#include <iostream>

void callback(int result) {
    std::cout << "Callback result: " << result << std::endl;
}

// Function accepting a callback function pointer
void process(int x, int y, void (*callbackFunc)(int)) {
    int result = x + y;
    callbackFunc(result);  // Call the callback function
}

int main() {
    process(10, 20, callback);  // Pass function pointer as callback
    return 0;
}
