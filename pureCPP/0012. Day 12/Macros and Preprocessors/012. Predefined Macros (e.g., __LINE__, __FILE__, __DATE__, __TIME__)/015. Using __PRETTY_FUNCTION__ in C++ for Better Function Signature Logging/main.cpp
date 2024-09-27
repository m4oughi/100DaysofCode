#include <iostream>

void log_function_name() {
    std::cout << "This function is: " << __PRETTY_FUNCTION__ << std::endl;
}

int main() {
    log_function_name();
    return 0;
}
