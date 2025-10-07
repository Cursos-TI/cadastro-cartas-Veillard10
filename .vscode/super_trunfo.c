#include <stdio.h>

int main () { 

    //Dados das cartas

    int Carta_carta1 = {"São Paulo", "SP"};
    int Carta_carta2 = {"Rio de Janeiro","RJ"};


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
    printf("Informe a quantidade de pontos turísticos:\n");
scanf("%d",&PontosTuristicos2);



// Calcular Densidade Populacional e PIB per capita

printf("Calculadora de Indicadores Socioeconômicos\n");

// Entrada de Dados carta 1

printf("Digite a População:\n");
scanf("%d",&População1);

printf("Digite a Area:\n");
scanf("%f",&Area1);

printf("Digite o Pib:\n");
scanf("%f",&Pib1);

//Saída de Dados

if(População1 = 11904961){
printf("Densidade Populacional: %.2f hab\n");
}else{
printf("Densidade Populacional: não calculada");
}
if(Area1 = 152111){
printf("Area: %.2f km²\n");
}else{
printf("Area: Kilometragem não calculada\n");        
}
if(Pib1 = 3.13){
printf("Pib per capita: %.2f Trilhões\n");
}else{
printf("Pib per capita: não calculado\n");
}


// Entrada de Dados carta 2

printf("Digite a População:\n");
scanf("%d",&População2);

printf("Digite a Area:\n");
scanf("%f",&Area2);

printf("Digite o Pib:\n");
scanf("%f",&Pib2);

//Saída de Dados

if(População2 = 17223547){
printf("Densidade Populacional: %.2f hab\n");
}else{
printf("Densidade Populacional: não calculada");
}
if(Area2 = 1200329){
printf("Area: %.2f km²\n");
}else{
printf("Area: Kilometragem não calculada\n");        
}
if(Pib2 = 1.15){
printf("Pib per capita: %.2f Trilhões\n");
}else{
printf("Pib per capita: não calculado\n");
}

// Atributo de comparação (PIB) 

float Pib1 = 3.13;
float Pib2 = 1.15;

printf("Comparação de Cartas(Atributo: PIB)");

printf("Carta 1 (SP):3.13 Trilhões\n")
printf("Carta 2 (RJ):1,15 Trilhões\n")
Printf("Carta 1 (São Paulo) Venceu!")




}



return 0;
}
