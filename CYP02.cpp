#include <stdio.h>

int main()
{
    char bfType[3]="BM";
    int bfSize, bfOffBits, bfReserved1, bfReserved2;

    bfReserved1 = 0;
    bfReserved2 = 0;

    scanf_s("%i %i", &bfSize, &bfOffBits);
    printf_s("%s%.8X%.4i%.4i%.8X", bfType, bfSize, bfReserved1, bfReserved2, bfOffBits);
    return 0;
}