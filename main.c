#include <stdio.h>

void jugar(int* n){
    int u = *n;
        printf(" en jugar la u es %d\n  ",u);
        printf("cambio el valor en el puntero de x por 78 ");
        *n = 78;
    u = 00;
};
int main(){
    int x = 8;
    printf("x vale %d\n",x);
    jugar(&x);
    printf("ahora x vale %d\n ", x);
    return 0;
}