#include <stdio.h>
#include "calc.h"

int test_add() {
    return add(2, 3) == 5;
}

int test_sub() {
    return sub(5, 3) == 2;
}

int test_mul() {
    return mul(4, 3) == 12;
}

int test_div() {
    return div(10, 2) == 5;
}

int main() {
    printf("test_add: %s\n", test_add() ? "PASS" : "FAIL");
    printf("test_sub: %s\n", test_sub() ? "PASS" : "FAIL");
    printf("test_mul: %s\n", test_mul() ? "PASS" : "FAIL");
    printf("test_div: %s\n", test_div() ? "PASS" : "FAIL");
    return 0;
}
