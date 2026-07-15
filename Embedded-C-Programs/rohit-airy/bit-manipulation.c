//que 1    Write a function that toggles the 3rd and 5th bits of an 8-bit number.

#include <stdio.h>

unsigned char toggleBits(unsigned char num) {
    unsigned char mask = (1 << 2) | (1 << 4);
    num = num ^ mask;
    return num;
}

int main() {
    unsigned char num = 0b10001101;
    printf("Before: %d\n", num);

    num = toggleBits(num);
    printf("After:  %d\n", num);

    return 0;
}