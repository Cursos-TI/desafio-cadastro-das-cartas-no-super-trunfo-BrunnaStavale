#include <stdio.h>

int main(){
    char estado;
    char codigo[3];
    char cidade[15];
    int populacao, pontos_turisticos;
    float area, pib;

    printf("Estado: ");
    scanf("%c", &estado); 
    
    printf("Código: ");
    scanf("%s", codigo); 

    printf("Nome da Cidade: ");
    scanf("%s", cidade);
    
    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    return 0;
}
