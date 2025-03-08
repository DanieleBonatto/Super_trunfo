#include <stdio.h>

 int main(){
    //Variaveis da Carta 1
    char Estado1;
    char CodigoCarta1[4];
    char NomeCidade1[50];
    int Populacao1;
    float Area1; //Area relativa a km²
    float PIB1;// Pruduto Interno Bruto
    int PontosTuristicos1;// Quantidade de pontos turisticos na Cidade


    //Variaveis da Carta2
    char Estado2;
    char CodigoCarta2[4];
    char NomeCidade2[50];
    int Populacao2;
    float Area2;//Área relativa a km²
    float PIB2;//Produto Interno Bruto
    int PontosTuristicos2;//Quantidade de pontos turisticos na Cidade

    // Adquirindo informações da Carta1

    printf("Digite o nome do Estado (A-H):\n");
    scanf("%c",&Estado1);


    printf("Digite o Código da Carta(A01-B03):\n");
    scanf("%s",CodigoCarta1);


    printf("Digite o nome da cidade:\n");
    scanf(" %s",NomeCidade1);


    printf("Digite o numero equivalente à População:\n");
    scanf("%d",&Populacao1);


    printf("Digite a Área em km² da Cidade:\n");
    scanf("%f",&Area1);


    printf("Digite o valor equivalente ao PIB da cidade:\n");
    scanf("%f",&PIB1);


    printf("Digite os Pontos Turisticos da cidade:\n");
    scanf("%i",&PontosTuristicos1);


    // Adquirindo informações da Carta 2
    

    printf("Digite o nome do estado (A-H):\n");
    scanf(" %c",&Estado2);



    printf("Digite o código da carta(A01-B03):\n");
    scanf(" %s",CodigoCarta2);


    printf("Digite o nome da cidade:\n");
    scanf(" %s",NomeCidade2);


    printf("Digite o numero equivalente a População:\n");
    scanf("%d",&Populacao2);


    printf("Digite a Área em km² da Cidade:\n");
    scanf("%f",&Area2);


    printf("Digite o valor equivalente ao PIB da cidade:\n");
    scanf("%f",&PIB2);


    printf("Digite os pontos turisticos:\n");
    scanf(" %i",&PontosTuristicos2);



    return 0;


 }
