#include <iostream>
#define USE_MAX // Toggle this definition to use the inline max function
#include "math_utils.h"

int main() {
    std::cout << "Max of 10 and 20: " << max(10, 20) << std::endl; // Output: 20 or 30 depending on USE_MAX
    return 0;
}
