export module securemath;

namespace {
    int hiddenHelper(int x) {  // This function is hidden
        return x * x;
    }
}

export int secureSquare(int x) {
    return hiddenHelper(x);
}
