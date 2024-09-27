#define CONCAT2(a, b) a##b
#define NAME cat
#define CATNAME(name) CONCAT2(NAME, name)

int main() {
    int catvalue = 10;
    int result = CATNAME(value); // Expands to: catvalue
    return 0;
}
