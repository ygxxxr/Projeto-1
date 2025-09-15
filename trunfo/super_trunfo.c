#include <stdio.h>

int main(){
    //Dados de cada carta
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    /*entrada de dados carta 1*/
    printf ("Cadastro da Carta 1\n");
    printf ("Estado (A-H):" );
    scanf ("%c", &estado1);

    printf("codigo da carta(Ex: A01):")
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s\n", cidade1); 

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);
}