#include <iostream>

enum class AlertLevel { Low, Medium, High };
enum class BatteryLevel { Low, Medium, High };

int main() {
    AlertLevel a = AlertLevel::Low;
    BatteryLevel b = BatteryLevel::Low;

    // No conflict between AlertLevel::Low and BatteryLevel::Low
    std::cout << "Two enums can share same names safely.\n";
}
