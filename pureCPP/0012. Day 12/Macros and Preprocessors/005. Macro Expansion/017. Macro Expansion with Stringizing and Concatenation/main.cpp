#define MAKE_STRING(x) #x
#define MAKE_VAR_STRING(name, id) MAKE_STRING(name##id)

int main() {
    const char* varName = MAKE_VAR_STRING(var, 1); // Expands to: "var1"
    return 0;
}
