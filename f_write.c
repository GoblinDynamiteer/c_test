#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fpointer;
    fpointer = fopen("test.txt", "w");
    fprintf(fpointer,"Detta är ett test\n");

    fclose(fpointer);

    return 0;
}
