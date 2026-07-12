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
    uint8_t count = 0;
    
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



int main(void) {
    // question one
    uint8_t input_q1 = 0b00101100; 
    uint8_t result_q1 = question_one(input_q1);
    printf("---\nquestion 1\n");
    printf("Input:  %08b\n", input_q1);
    printf("Result: %08b\n", result_q1);

    // question two
    uint8_t input_q2 = 3; 
    uint8_t result_q2 = question_two(input_q2);
    printf("---\nquestion 2\n");
    printf("Input:  %d\n", input_q2);
    printf("Result: %08b\n", result_q2);

    // question three
    uint8_t input_q3 = 16; 
    printf("---\nquestion 3\n");
    printf("Input:  %d\n", input_q3);
    printf("Result: ");
    question_three(input_q3);
    printf("\n");

    // question four
    uint8_t input_q4 = 0b01101101; 
    uint8_t result_q4 = question_four(input_q4);
    printf("---\nquestion 4\n");
    printf("Input:  %08b\n", input_q4);
    printf("Result: %d\n", result_q4);

    // question five
    uint8_t input_q5 = 0b10010110; 
    uint8_t result_q5 = question_five(input_q5);
    printf("---\nquestion 5\n");
    printf("Input:  %08b\n", input_q5);
    printf("Result: %08b\n", result_q5);

    return 0;
}
