#include <stdio.h>

int fatorial (int n){
    if (n == 0 || n == 1){
        return 1;// Condição de parada
    }
     else{
        return n * fatorial (n - 1);
    }
}

int main (){

    int x = 0;

    printf ("Insira um numero inteiro positivo qulquer: \n");
    scanf  ("%d", &x);

    printf("O fatorial de %d eh: %d\n", x, fatorial(x));
return 0;
}
