#include <iostream>

class Camera {
public:
    enum class Mode { Photo, Video, SlowMotion };
    using CameraMode = Mode;

    void setMode(CameraMode m) {
        if (m == Mode::Video) std::cout << "Recording video...\n";
    }
};

int main() {
    Camera c;
    c.setMode(Camera::Mode::Video);
}
