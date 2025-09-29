#include <stdio.h>

int main () { 

    char Estado1[4],estado2[4];
    char Codigo_carta1[4], codigo_carta2[4];
    char Nomecidade[49],Nomecidade2[49];
    int População1,População2; 
    float Area1,Area2;
    float Pib1,Pib2;
    int PontosTuristicos1,PontosTuristicos2;

    //lendo os dados da carta 1
    printf("Cadastro carta 1:\n ");

    printf("Informe o estado(A-H):");
    scanf("%c",Estado1);
    printf("Informe o codigo da carta(ex:A01):");
    scanf("%s",Codigo_carta1);
    printf("Informe o nome da cidade:");
    scanf("%s",Nomecidade);
    printf("Informe a população:");
    scanf("%d",&População1);
    printf("Informe a área:");
    scanf("%f",&Area1);
    printf("Informe o PIB (bilhões de Reais):");
    scanf("%f",&Pib1);
    printf("Informe a quantidade de pontos turísticos:");
    scanf("%d",&PontosTuristicos1);

    //lendo os dados da carta 2
    printf("\nCadastro carta 2:\n ");

    printf("Informe o estado(A-H):");
    scanf(" %c",estado2);
    printf("Informe o codigo da carta(ex:A01):");
    scanf("%s",codigo_carta2);
    printf("Informe o nome da cidade:");
    scanf("%s",Nomecidade2);
    printf("Informe a população:");
    scanf("%d",&População2);
    printf("Informe a área:");
    scanf("%f",&Area2);
    printf("Informe o PIB (bilhões de Reais):");
    scanf("%f",&Pib2);
    printf("Informe a quantidade de pontos turísticos:");
scanf("%d",&PontosTuristicos2);
return 0;
}
