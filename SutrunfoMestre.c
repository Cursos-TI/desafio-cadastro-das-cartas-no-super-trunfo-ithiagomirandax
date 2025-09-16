#include <stdio.h>

int main(){

    int cod1, PT1;
    char nome1[50];
    unsigned long int popu1;
    float PIB1, area1, dens1, ppc1, super1;

    int cod2, PT2;
    char nome2[50];
    unsigned long int popu2;
    float PIB2, area2, dens2, ppc2, super2;

    printf("- CADASTRO DA CIDADE 1-\n");

    printf("Digite o codigo da primeira cidade: ");
    scanf("%d", &cod1);

    printf("Digite o nome da primeira cidade: ");
    scanf("%s", nome1);

    printf("Digite o numero da população: ");
    scanf("%lu", &popu1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite o numero de Pontos turisticos: ");
    scanf("%d", &PT1);

    printf("- CADASTRO DA CIDADE 2 -\n");

    printf("Digite o codigo da segunda cidade: ");
    scanf("%d", &cod2);

    printf("Digite o nome da segunda cidade: ");
    scanf("%s", nome2);

    printf("Digite a populçao: ");
    scanf("%lu", &popu2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o numeor de pontos turisticos: ");
    scanf("%d", &PT2);

    // Calculos
    dens1 = popu1 / area1;
    ppc1 = PIB1 / popu1;

    dens2 = popu2 / area2;
    ppc2 = PIB2 / popu2;

    // Calculo do Super Poder
    super1 = (float)popu1 + area1 + PIB1 + PT1 + ppc1 + (1.0 / dens1);
    super2 = (float)popu2 + area2 + PIB2 + PT2 + ppc2 + (1.0 / dens2);

    // Exibição dos dados
    printf("\n- CIDADE CADASTRADAS -\n");

    printf("\n - CIDADE 1 -\n ");
    printf("Codigo: %d\n", cod1);
    printf("Nome: %s\n", nome1);
    printf("Populaçao: %lu\n", popu1);
    printf("Area: %f\n", area1);
    printf("PIB: %f\n", PIB1);
    printf("Pontos Turiscos: %d\n", PT1);
    printf("Densidade Populacional: %.2f hab/km²\n", dens1);
    printf("PIB per Capita: %.2f reais\n", ppc1);
    printf("Super Poder: %.2f\n", super1);

    printf("\n - CIDADE 2 -\n ");
    printf("Codigo: %d\n", cod2);
    printf("Nome: %s\n", nome2);
    printf("Populaçao: %lu\n", popu2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("Pontos Turisticos: %d\n", PT2);
    printf("Densidade Populacional: %.2f hab/km²\n", dens2);
    printf("PIB per Capita: %.2f reais\n", ppc2);
    printf("Super Poder: %.2f\n", super2);

    // Comparações
    printf("\n\nComparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", popu1 > popu2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", PT1 > PT2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", dens1 < dens2);  // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", ppc1 > ppc2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super1 > super2);

    return 0;
}
