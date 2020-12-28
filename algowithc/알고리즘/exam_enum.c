#include <stdio.h>

typedef enum {
    Jubilee = 10,
    Mayfair,
    Blackfoot,
    ChingTao,
    Russian_C1 = 20,
    Russian_C2,
    Russian_C3,
    Adonis,
    Martini = 50,
    Martini_K,
    Martini_E,
    Martini_C
}PRINTER;

void main(){
    printf("Julibee : %d\n", Jubilee);
    printf("Mayfair : %d\n", Mayfair);
    printf("Blackfoot : %d\n", Blackfoot);
    printf("ChingTao : %d\n", ChingTao);
    printf("Russian_C1 : %d\n", Russian_C1);
    printf("Russian_C2 : %d\n", Russian_C2);
    printf("Russian_C3 : %d\n", Russian_C3);
    printf("Adonis : %d\n", Adonis);
    printf("Martini : %d\n", Martini);
    printf("Martini_K : %d\n", Martini_K);
    printf("Martini_E : %d\n", Martini_E);
    printf("Martini_C : %d\n", Martini_C);

}