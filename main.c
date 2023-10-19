#include <stdio.h>
#include <stdlib.h>

// void jugar(int* n){
//     int u = *n;
//         printf(" en jugar la u es %d\n  ",u);
//         printf("cambio el valor en el puntero de x por 78 ");
//         *n = 78;
//     u = 00;
// };
// int main(){
//     int x = 8;
//     printf("x vale %d\n",x);
//     jugar(&x);
//     printf("ahora x vale %d\n ", x);
    // return 0;
// }
int main() {
    int rango;
    printf("Ingrese el rango: "); 

    int* valores = malloc(rango * sizeof(int));
    int yy = 1;

    if (valores == NULL) { 
        printf("Error de memoria.\n");
        return 1; 
    }

    for (int i = 0; i < rango; i++) {
        yy = yy + i;
        valores[i] = yy;
        printf("%d guardado en la posición %d\n", valores[i], i);
    }

   
    free(valores);

    return 0; 
}
