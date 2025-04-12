#include <iostream>
#include <memory>

enum class DeviceState : uint8_t;

class Device {
public:
    Device(std::unique_ptr<DeviceState> s) : state(std::move(s)) {}
    void show();

private:
    std::unique_ptr<DeviceState> state;
};

enum class DeviceState : uint8_t {
    Offline = 0, Online = 1
};

void Device::show() {
    std::cout << "Device State: " << static_cast<int>(*state) << std::endl;
}

int main() {
    auto state = std::make_unique<DeviceState>(DeviceState::Online);
    Device d(std::move(state));
    d.show();
}
