#include <stdio.h>
#include <stdlib.h>

int main()
{
    int countingNumber = 1;

    while (countingNumber <= 100)
    {
        printf("%d\n", countingNumber);
        countingNumber += 2;
    }

    //printf("Hello world!\n");
    return 0;
}
