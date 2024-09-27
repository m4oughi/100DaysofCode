#define ENUM_VALUE(name, value) name##_##value

enum Colors {
    ENUM_VALUE(COLOR, RED),
    ENUM_VALUE(COLOR, GREEN),
    ENUM_VALUE(COLOR, BLUE)
};

int main() {
    enum Colors color = COLOR_GREEN; // Expands to: COLOR_GREEN
    return 0;
}
