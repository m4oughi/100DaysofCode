#include <iostream>

enum class Device { Phone, Tablet };
enum class OS { Android, iOS };

int main() {
    Device d = Device::Phone;
    OS o = OS::Android;

    // if (d == o) { } // ❌ Compilation error: Different enum class types
}
