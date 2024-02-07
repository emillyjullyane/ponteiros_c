#include <stdio.h>

int main()
{
    float x, *ptx;
    printf("---- Dobro do valor ----\n");
    printf("Digite um numero: ");
    scanf("%f", &x);
    ptx = &x;
    *ptx *=2;
    printf("O dobro é %.f.\n", *ptx);
}