#include <stdio.h>

// Question 1
unsigned char toggle_bits(unsigned char n)
{
    unsigned char mask = (1 << 3) | (1 << 5);
    return n ^ mask;
}

// Question 2
unsigned char set_first_n_bits(int n)
{
    unsigned char ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans |= (1 << i);
    }

    return ans << (8 - n);
}

// Question 3
void check_power_of_2(int n)
{
    if (n > 0 && ((n & (n - 1)) == 0))
    {
        printf("%d is a power of 2\n", n);
    }
    else
    {
        printf("%d is not a power of 2\n", n);
    }
}

// Question 4
int count_set_bits(int n)
{
    int count = 0;

    while (n > 0)
    {
        if (n & 1)
        {
            count++;
        }

        n >>= 1;
    }

    return count;
}

// Question 5
unsigned char swap_bits(unsigned char n)
{
    unsigned char even = n & 0x55;
    unsigned char odd = n & 0xAA;

    even <<= 1;
    odd >>= 1;

    return even | odd;
}

int main()
{
    unsigned char n = 12;

    printf("Question 1 (Toggle Bits): %u\n", toggle_bits(n));

    printf("Question 2 (Set First 4 Bits): %u\n", set_first_n_bits(4));

    printf("Question 3 (Power of 2): ");
    check_power_of_2(n);

    printf("Question 4 (Count Set Bits): %d\n", count_set_bits(n));

    printf("Question 5 (Swap Odd and Even Bits): %u\n", swap_bits(n));

    return 0;
}