#include <iostream>
#include <stdexcept>

int main() {
    auto lambda = [](int code) {
        if (code == 1) {
            throw std::runtime_error("Runtime error!");
        } else if (code == 2) {
            throw std::logic_error("Logic error!");
        } else {
            throw std::exception();
        }
    };

    try {
        lambda(2); // Triggers the logic_error
    } catch (const std::runtime_error& e) {
        std::cout << "Caught runtime_error: " << e.what() << std::endl;
    } catch (const std::logic_error& e) {
        std::cout << "Caught logic_error: " << e.what() << std::endl; // Outputs: Caught logic_error: Logic error!
    } catch (const std::exception& e) {
        std::cout << "Caught generic exception!" << std::endl;
    }

    return 0;
}
