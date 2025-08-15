#include <stdio.h>

int main(){
    
    char estado;
    char código [20];
    char nomedaCidade [20];
    int população;
    float areakm²;
    float PIB;
    int númerodepontosturisticos;

    printf("Qual e o estado: \n");
    scanf("%c", estado);

    printf("Qual é o código: \n");
    scanf("%c", código);

    printf("Qual é o Nome da cidade: \n");
    scanf("%c", nomedaCidade);

    printf("Quantidade da população: \n");
    scanf("%d", população);

    printf("Qual é a area km²: \n");
    scanf("%e", areakm²);

    printf("Qual o PIB: \n");
    scanf("%e", PIB);

    printf("Quantidade de número de pontos turísticos: \n");
    scanf("%d", númerodepontosturisticos);

    return 0;
}
