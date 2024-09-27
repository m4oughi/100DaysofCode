#define CREATE_VARIABLE(name, id) name##id

int main() {
    int CREATE_VARIABLE(counter, 10) = 50; // Expands to: counter10
    return 0;
}
