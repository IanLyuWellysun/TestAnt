#include <stdint.h>
#include <stdio.h>
uint8_t AddT(uint8_t a, uint8_t b);
int main()
{
    uint8_t result;
    result=AddT(5,3);
    printf("Hello%d\n",result);

    return 0;
}

uint8_t AddT(uint8_t a, uint8_t b)
{
    return a+b;
}
