#include <stdio.h>
#include <stdint.h>

uint8_t question_one(uint8_t n) {
    uint8_t mask = (uint8_t) ((1 << 3) | (1 << 5));
    return (n ^ mask);
}

uint8_t question_two (uint8_t n) {
    uint8_t mask = (uint8_t)(0xFF >> n);
    return (~mask);
}

void question_three (uint8_t n) {
    if ((n > 0) && ((n & (n-1)) == 0)) {
        printf("True");
    }
}

uint8_t question_four (uint8_t n) {
    count = 0;
    
    if (n) {n &= (n-1); count++;}
    if (n) {n &= (n-1); count++;}
    if (n) {n &= (n-1); count++;}
    if (n) {n &= (n-1); count++;}
    if (n) {n &= (n-1); count++;}
    if (n) {n &= (n-1); count++;}
    if (n) {n &= (n-1); count++;}
    if (n) {n &= (n-1); count++;}
    
    return count;
}

uint8_t question_five (uint8_t n) {
    uint8_t even_bits = (uint8_t)((n & 0xAA) >> 1);
    uint8_t odd_bits = (uint8_t) ((n & 0x55) << 1);
    return (uint8_t)(even_bits | odd_bits);
}
