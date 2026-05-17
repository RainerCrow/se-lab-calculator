#include <stdio.h>
#include "utils.h"

int test_square() {
    return square(4) == 16;
}

int test_cube() {
    return cube(3) == 27;
}

int main() {
    printf("test_square: %s\n", test_square() ? "PASS" : "FAIL");
    printf("test_cube: %s\n", test_cube() ? "PASS" : "FAIL");
    return 0;
}
