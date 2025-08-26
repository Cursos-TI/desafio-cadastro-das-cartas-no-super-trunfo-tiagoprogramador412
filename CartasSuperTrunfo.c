#include <stdio.h>

int main(){
    
    char estado = 'A';
    char código[20] = "A01";
    char nomedaCidade[20] = "Manaus";
    int população = 2069689;
    float areakm² = 11402;
    float PIB = 103000000000;
    int númerodepontosturisticos = 35;
    float densidadepopulacional = população/areakm²;
    float PIBpercapita = PIB/população;


    printf("Carta 1: \n");
    printf("Estado: %c\n",estado);
    printf("Código: %s\n", código);
    printf("Nome da cidade: %s\n", nomedaCidade);
    printf("População: %d\n", população);
    printf("Área km²: %.fkm²\n", areakm²);
    printf("PIB: %.fbilhões\n", PIB);
    printf("Número de pontos turísticos: %d\n", númerodepontosturisticos);
    printf("Densidade da população: %.2f\n", densidadepopulacional);
    printf("PIB per capita: %.2f\n", PIBpercapita);


    return 0;

}
