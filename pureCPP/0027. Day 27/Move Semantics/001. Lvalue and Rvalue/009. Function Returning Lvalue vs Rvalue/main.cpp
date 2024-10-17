int global = 42;

int& getLvalue() {
    return global;  // Returns an Lvalue reference
}

int getRvalue() {
    return 100;     // Returns an Rvalue
}

int main() {
    int x = getLvalue();  // getLvalue returns an Lvalue
    int y = getRvalue();  // getRvalue returns an Rvalue
    return 0;
}
