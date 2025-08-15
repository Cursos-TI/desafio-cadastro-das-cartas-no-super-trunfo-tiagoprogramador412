#include <stdio.h>

int main(){
    
    char estado = 'B';
    char código[20] = "B01";
    char nomedaCidade[20] = "Brasília";
    int população = 212000000;
    float areakm² = 5761;
    float PIB = 287;
    int númerodepontosturisticos = 32;

    printf("Carta 2: \n");
    printf("Estado: %c\n",estado);
    printf("Código: %s\n", código);
    printf("Nome da cidade: %s\n", nomedaCidade);
    printf("População: %d\n", população);
    printf("Área km²: %.fkm²\n", areakm²);
    printf("PIB: %fbilhões\n", PIB);
    printf("Número de pontos turísticos: %d\n", númerodepontosturisticos);


    return 0;

}