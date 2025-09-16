#include <stdio.h>

int main(){

int cod1, popu1, PT1;
char nome1[50];
float PIB1, area1;


int cod2, popu2, PT2;
char nome2 [50];
float PIB2, area2;

printf("- CADASTRO DA CIDADE 1-\n");


printf("Digite o codigo da primeira cidade: ");
scanf("%d", &cod1);

printf("Digite o nome da primeira cidade: ");
scanf("%s", nome1);

printf("Digite o numero da população: ");
scanf("%d", &popu1);

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
scanf("%d", &popu2);

printf("Digite a area: ");
scanf("%f", &area2);

printf("Digite o PIB: ");
scanf("%f", &PIB2);

printf("Digite o numeor de pontos turisticos: ");
scanf("%d", &PT2);


printf("\n- CIDADE CADASTRADAS -\n");

printf("\n - CIDADE 1 -\n ");
printf("Codigo: %d\n", cod1);
printf("Nome: %s\n", nome1);
printf("Populaçao: %d\n", popu1);
printf("Area: %f\n", area1);
printf("PIB: %f\n", PIB1);
printf("Pontos Turiscos: %d\n", PT1);

printf("\n - CIDADE 2 -\n ");
printf("Codigo: %d\n", cod2);
printf("Nome: %s\n", nome2);
printf("Populaçao: %d\n", popu2);
printf("Area: %f\n", area2);
printf("PIB: %f\n", PIB2),
printf("Potos Turisticos: %d\n", PT2);

return 0;

}