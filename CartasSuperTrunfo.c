#include <stdio.h>

int main() {
    char Estado[3], Codigo[50], Cidade[64], Estado2[3], Codigo2[50], Cidade2[64];
    int Populacao, PontosTuristicos, Populacao2, PontosTuristicos2;
    float PIB, Area, PIBPerCapita, Densidade, PIB2, Area2,  PIBPerCapita2, Densidade2;
 

    printf("Insira as informações da carta 1\n");

    printf("Estado (de A a H): \n");
    scanf("%s", Estado);

    printf("Código da carta: \n");
    scanf("%s", Codigo);

    printf("Cidade: \n");
    scanf("%s", Cidade);

    printf("População: \n");
    scanf("%d", &Populacao);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &PontosTuristicos);

    printf("PIB (em bilhões): \n");
    scanf("%f", &PIB);

    printf("Área (km²): \n");
    scanf("%f", &Area);


    PIBPerCapita = (float) PIB/Populacao;
    Densidade = (float) Populacao/Area;


    /////////////// carta 2 /////////////////

    printf("\nInsira as informações da carta 2\n");

    printf("Estado (de A a H): \n");
    scanf("%s", Estado2);

    printf("Código da carta: \n");
    scanf("%s", Codigo2);

    printf("Cidade: \n");
    scanf("%s", Cidade2);

    printf("População: \n");
    scanf("%d", &Populacao2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &PontosTuristicos2);

    printf("PIB (em bilhões): \n");
    scanf("%f", &PIB2);

    printf("Área (km²): \n");
    scanf("%f", &Area2);

    PIBPerCapita2 = (float) PIB2/Populacao2;
    Densidade2 = (float) Populacao2/Area2;


    //// retorno ////

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Pontos Turísticos: %d\n", PontosTuristicos);
    printf("PIB per Capita: %f \n", PIBPerCapita);
    printf("Densidade populacional: %f \n", Densidade);


    //// carta 2 ////

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("PIB per Capita: %f \n", PIBPerCapita2);
    printf(" Densidade populacional: %f \n", Densidade2);


    return 0;
}
