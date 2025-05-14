#include <stdio.h>

int main() {
    char Estado[3], Codigo[50], Cidade[64];
    int Populacao, PontosTuristicos;
    float PIB, Area;

    char Estado2[3], Codigo2[50], Cidade2[64];
    int Populacao2, PontosTuristicos2;
    float PIB2, Area2;

    printf("Insira as informações da carta 1\n");

    printf("Estado (de A a H): ");
    scanf("%s", Estado);

    printf("Código da carta: ");
    scanf("%s", Codigo);

    printf("Cidade: ");
    scanf("%s", Cidade);

    printf("População: ");
    scanf("%d", &Populacao);

    printf("Número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos);

    printf("PIB (em bilhões): ");
    scanf("%f", &PIB);

    printf("Área (km²): ");
    scanf("%f", &Area);

    printf("\nInsira as informações da carta 2\n");

    printf("Estado (de A a H): ");
    scanf("%s", Estado2);

    printf("Código da carta: ");
    scanf("%s", Codigo2);

    printf("Cidade: ");
    scanf("%s", Cidade2);

    printf("População: ");
    scanf("%d", &Populacao2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

    printf("PIB (em bilhões): ");
    scanf("%f", &PIB2);

    printf("Área (km²): ");
    scanf("%f", &Area2);

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Pontos Turísticos: %d\n", PontosTuristicos);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);

    return 0;
}
