int main() {
    int a = 42;
    int &ref = a;  // ref is an Lvalue reference to a
    ref = 100;     // Modifies the original Lvalue a
    return 0;
}