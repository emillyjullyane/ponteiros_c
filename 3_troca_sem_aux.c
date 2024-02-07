#include <stdio.h>

void troca(int *x, int *y);

int main()
{
    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);

    troca(&a,&b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
void troca(int *x, int *y){
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

