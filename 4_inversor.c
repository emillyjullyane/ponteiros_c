#include <stdio.h>

int invNum(int numero) {
    int inv = 0;
    do{
        inv = inv * 10 + numero % 10;
        numero = numero / 10;
    }while(numero != 0);
    return inv;
}

int main() {
    int numero, num_inv;
    printf("---- Inversor de número ----\n");
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    num_inv = invNum(numero);
    
    printf("O inverso do número %d é %d.\n", numero, num_inv);
    return 0;
}

