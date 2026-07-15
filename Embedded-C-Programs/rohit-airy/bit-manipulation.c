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


//que 2 Set Bits Without Using Arithmetic Operations. Implement a function that sets the first n bits of a byte to 1.


#include <stdio.h>

unsigned char setFirstNBits(int n) {
    unsigned char result = 0;
    while (n--) {
        result = (result << 1) | 1;
    }
    return result;
}

int main() {
    int n = 4;
    unsigned char result = setFirstNBits(n);
    printf("Result: %d\n", result);
    return 0;
}