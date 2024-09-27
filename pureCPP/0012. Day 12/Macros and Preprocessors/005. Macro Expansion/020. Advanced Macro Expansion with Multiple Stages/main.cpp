#define EVAL1(x) x
#define EVAL2(x) EVAL1(EVAL1(x))
#define EVAL3(x) EVAL2(EVAL2(x))
#define EVAL(x) EVAL3(x)
#define NESTED_MACRO(a, b) EVAL(a + b)

int main() {
    int result = NESTED_MACRO(5, 6); // Expands through multiple evaluation stages
    return 0;
}
