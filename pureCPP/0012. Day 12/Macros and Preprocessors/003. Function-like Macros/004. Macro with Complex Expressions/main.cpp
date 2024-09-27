#define AREA_RECTANGLE(length, width) ((length) * (width))

int main() {
    int l = 10, w = 5;
    int area = AREA_RECTANGLE(l, w); // Expands to: ((10) * (5))
    return 0;
}
