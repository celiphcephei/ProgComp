#include <stdio.h>

void update(int *a,int *b) {
    int temp = *a;
    *a += *b;
    *b -= temp;
    if(*b < 0){
        (*b) *= -1;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

/*
    Recibe 2 entradas
    a = numero 1
    b = numero 2
    modifica el valor de a para que sea la suma de a + b
    modifica el valor de b para que sea la diferencia entre a y b
*/