#include <stdio.h>

typedef struct {
    char nome[100];
    int estado;
    int codigo;
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Carta;

float calcular_densidade_populacional(Carta carta) {
    return (float)carta.populacao / carta.area;
}

float calcular_pib_per_capita(Carta carta) {
    return carta.pib / carta.populacao;
}

float calcular_super_poder(Carta carta) {
    float inverso_densidade = 1 / carta.densidade_populacional;
    return carta.populacao + carta.area + carta.pib + carta.pontos_turisticos + carta.pib_per_capita + inverso_densidade;
}

void comparar_cartas(Carta carta1, Carta carta2) {
    printf("Comparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", (carta1.populacao > carta2.populacao));

    printf("Área: Carta 1 venceu (%d)\n", (carta1.area > carta2.area));

    printf("PIB: Carta 1 venceu (%d)\n", (carta1.pib > carta2.pib));

    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", (carta1.pontos_turisticos > carta2.pontos_turisticos));

    printf("Densidade Populacional: Carta 2 venceu (%d)\n", (carta1.densidade_populacional > carta2.densidade_populacional));

    printf("PIB per Capita: Carta 1 venceu (%d)\n", (carta1.pib_per_capita > carta2.pib_per_capita));

    printf("Super Poder: Carta 1 venceu (%d)\n", (carta1.super_poder > carta2.super_poder));
}

int main() {
    Carta carta1, carta2;

    printf("Digite os dados da Carta 1:\n");
    printf("Nome: ");
    scanf("%s", carta1.nome);
    printf("Estado: ");
    scanf("%d", &carta1.estado);
    printf("Código: ");
    scanf("%d", &carta1.codigo);
    printf("População: ");
    scanf("%lu", &carta1.populacao);
    printf("Área: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Pontos Turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    carta1.densidade_populacional = calcular_densidade_populacional(carta1);
    carta1.pib_per_capita = calcular_pib_per_capita(carta1);
    carta1.super_poder = calcular_super_poder(carta1);

    printf("\nDigite os dados da Carta 2:\n");
    printf("Nome: ");
    scanf("%s", carta2.nome);
    printf("Estado: ");
    scanf("%d", &carta2.estado);
    printf("Código: ");
    scanf("%d", &carta2.codigo);
    printf("População: ");
    scanf("%lu", &carta2.populacao);
    printf("Área: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Pontos Turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    carta2.densidade_populacional = calcular_densidade_populacional(carta2);
    carta2.pib_per_capita = calcular_pib_per_capita(carta2);
    carta2.super_poder = calcular_super_poder(carta2);

    comparar_cartas(carta1, carta2);

    return 0;
}
