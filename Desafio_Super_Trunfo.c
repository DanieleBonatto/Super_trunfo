#include <stdio.h>
  
  int main(){
      // Declaração das variaveis
      char Pais1[20], Pais2[20];
      char Codigo_da_carta1[4], Codigo_da_carta2[4];//Código da carta de 'A01 a B02'
      unsigned int Populacao1, Populacao2;//Sem sinal (não existe população negativa).
      int Pontos_turisticos1, Pontos_turisticos2;
      int atributo1, atributo2;
      int resultado1, resultado2;
      float Area1, Area2, Pib1, Pib2; // em Km² e Produto interno Bruto
      float densidade_demografica1, densidade_demografica2;
      float PIB_per_capita1, PIB_per_capita2;// população por km² e Divisão do PIB pela populaçãp
      float Super_Poder1, Super_Poder2;// Soma de todas as variáveis numéricas
      
      /* Cada jogador apresenta suas cartas, com as informaçoes
      do nome País, Código da carta, assim como a População
      àrea em km², pib e pontos turisticos. */
 
      printf("***Super Trunfo***\n\n"); 
      printf("Jogador 1 digite as informações de País, Código da carta:\n\n");
      printf("Digite o nome do seu País\n");
      scanf("%s", Pais1);
      printf("Digite o codigo da carta (A01 - B02):\n");
      scanf("%s", Codigo_da_carta1);
 
      printf("Jogador 2 digite as informações de País, código da carta :\n\n");
      printf("Digite o nome do seu País\n");
      scanf("%s", Pais2);
      printf("Digite o codigo da carta (A01 - B02):\n");
      scanf("%s", Codigo_da_carta2);
 
      /* Disputa entre as cartas
      disputa entrer atributos de carta contra carta*/
 
      printf("**Descrição de requisitos do primeiro País:***\n");
 
      printf("Digite a população : %s\n", (Pais1));// especificador %u relacionado a unsigned
      scanf("%u", &Populacao1);
      printf("Digite Área total em km²: %s\n", (Pais1));// Área em km²
      scanf("%f", &Area1);
      printf("Digite o valor do PIB em reais: %s\n", (Pais1));
      scanf("%f", &Pib1);
      printf("Digite o número de pontos turísticos: %s\n", (Pais1));
      scanf(" %d", &Pontos_turisticos1);

      densidade_demografica1=(float) Populacao1 / Area1;// divisão de população pela àrea
      printf("A densidade demográfica 1 é de: %.4f\n", densidade_demografica1);
      PIB_per_capita1=(float) Pib1 / Populacao1;// divisão do Pib pela População
      printf(" O pib per capta é:%.2f\n", PIB_per_capita1);
      Super_Poder1 =(float) Populacao1 + Area1 + Pib1 + Pontos_turisticos1 + PIB_per_capita1 + densidade_demografica1;
      printf("O Super Poder da Carta 1 é :%.2f\n", Super_Poder1);

      printf("**Descrição de requisitos do segundo País:***\n");
      
      printf("Digite a população: %s\n", (Pais2));
      scanf("%u", &Populacao2);
      printf("Digite Área total em km²: %s\n", (Pais2));
      scanf("%f", &Area2);
      printf("Digite o valor do PIB em reais: %s\n", (Pais2));
      scanf("%f", &Pib2);
      printf("Digite o número de pontos turísticos: %s\n", (Pais2));
      scanf(" %d", &Pontos_turisticos2);

      densidade_demografica2=(float) Populacao2 / Area2;// divisão de população pela àrea
      printf("A densidade demográfica 2 é de : %.4f\n", densidade_demografica2);
      PIB_per_capita2=(float) Pib2 / Populacao2;// divisão do Pib pela População
      printf(" O pib per capita é:%.2f\n", PIB_per_capita2);
      Super_Poder2 =(float) Populacao2 + Area2 + Pib2 + Pontos_turisticos2 + PIB_per_capita2 + densidade_demografica2;
      printf("O Super poder do Paé :%.2f\n", Super_Poder2);
   
     //Primeiro menu de atributos para cmparação.
      printf("\n**Disputa entre atributos**\n");
      printf("Menu de atributos pra comparação:\n");
      printf("1. População\n");
      printf("2. Área\n");
      printf("3. Pib\n");
      printf("4. Pontos turisticos\n");
      printf("5. Densidade demográfica\n");
      printf("6. Pib per capita\n");
      printf("7. Super Poder\n");
      printf("Escolhao primeiro atributo\n");
      scanf("%d", &atributo1);

      switch (atributo1)
      {
     case 1:
      resultado1 = (Populacao1 > Populacao2) ? 1 :(Populacao2 > Populacao1) ? 2 : 0;
      if (resultado1 == 1)
      {
       printf("\nPopulação: %s venceu!\n", Pais1);
      } else if (resultado2 == 2)
      {
       printf("\nPopulação: %s venceu!\n", Pais2);
      } else 
      {
       printf("\n**Houve um Empate entre os Países!**\n");
      }
      break;

     case 2:
       resultado1 = (Area1 > Area2) ? 1 :(Area2 > Area1) ? 2 : 0;
       if (resultado1 == 1)
     {
      printf("\nÁrea: %s venceu!\n", Pais1);
     } else if (resultado2 == 2)
     {
      printf("\nÁrea: %s venceu!\n", Pais2);
     } else 
     {
      printf("\n**Houve um Empate entre os Países!**\n");
     }
      break;

     case 3:
     resultado1 = (Pib1 > Pib2) ? 1 :(Pib2 > Pib1) ? 2 : 0;
     if (resultado1 == 1)
     {
      printf("\nPib: %s venceu!\n", Pais1);
     } else if (resultado2 == 2)
     {
      printf("\nPib: %s venceu!\n", Pais2);
     } else 
     {
      printf("\n**Houve um Empate entre os Países!**\n");
     }
           
      break;

     case 4:
     resultado1 = (Pontos_turisticos1> Pontos_turisticos2) ? 1 :(Pontos_turisticos2 > Pontos_turisticos1) ? 2 : 0;
     if (resultado1 == 1)
     {
      printf("\nPontos Turísticos: %s venceu!\n", Pais1);
     } else if (resultado2 == 2)
     {
      printf("\nPontos Turísticos: %s venceu!\n", Pais2);
     } else 
     {
      printf("*\n*Houve um Empate entre os Países!**\n");
     }
    break;

     case 5:
     resultado1 = (densidade_demografica1 > densidade_demografica2) ? 1 :(densidade_demografica2 > densidade_demografica1) ? 2 : 0;
     if (resultado1 == 1)
     {
      printf("\nDensidade Demográfica: %s venceu!\n", Pais1);
     } else if (resultado2 == 2)
     {
      printf("\nDensidade Demográfgica: %s venceu!\n", Pais2);
     } else 
     {
      printf("\n**Houve um Empate entre os Países!**\n");
     }
      break;

     case 6:
     resultado1 = (PIB_per_capita1 > PIB_per_capita2) ? 1 :(PIB_per_capita2> PIB_per_capita1) ? 2 : 0;
     if (resultado1 == 1)
     {
      printf("\nPib per capita: %s venceu!\n", Pais1);
     } else if (resultado2 == 2)
     {
      printf("\nPib per capita: %s venceu!\n", Pais2);
     } else 
     {
      printf("\n**Houve um Empate entre os Países!**\n");
     }
      break;

     case 7:
     resultado1 = (Super_Poder1 > Super_Poder2) ? 1 :(Super_Poder2 > Super_Poder1) ? 2 : 0;
     if (resultado1 == 1)
     {
      printf("\nSuper Poder: %s venceu!\n", Pais1);
     } else if (resultado2 == 2)
     {
      printf("\nSuper Poder: %s venceu!\n", Pais2);
     } else 
     {
      printf("**Houve um Empate entre os Países!**\n");
     }
    break;
      default: printf("Opção INVÁLIDA!\n");
         break;
      }
     
      // Segundo menu de atributos de comparação.
      printf("\n**Disputa entre atributos**\n");
      printf("Menu de atributos pra comparação:\n");
      printf("1. População\n");
      printf("2. Área\n");
      printf("3. Pib\n");
      printf("4. Pontos turisticos\n");
      printf("5. Densidade demográfica\n");
      printf("6. Pib per capita\n");
      printf("7. Super Poder\n");
      printf("Escolha o segundo atributo\n");
      scanf("%d", &atributo2);

      if (atributo1 == atributo2)
      {
       printf("Você escolheu o mesmo atributo\n");
      }
      

      switch (atributo2)
      {
     case 1:
     if (resultado1 == 1)
     {
      printf("\nPopulação: %s venceu!\n", Pais1);
     } else if (resultado2 == 2)
     {
      printf("\nPopulação: %s venceu!\n", Pais2);
     } else 
     {
      printf("\n**Houve um Empate entre os Países!**\n");
     }
      break;

     case 2:
       resultado2 = (Area2 > Area1) ? 1 :(Area1 > Area2) ? 2 : 0;
       if (resultado1 == 1)
       {
        printf("\nÁrea: %s venceu!\n", Pais1);
       } else if (resultado2 == 2)
       {
        printf("\nÁrea: %s venceu!\n", Pais2);
       } else 
       {
        printf("\n**Houve um Empate entre os Países!**\n");
       }
      break;

     case 3:
     resultado2 = (Pib2 > Pib1) ? 1 :(Pib1 > Pib2) ? 2 : 0;
     if (resultado1 == 1)
     {
      printf("\nPib: %s venceu!\n", Pais1);
     } else if (resultado2 == 2)
     {
      printf("\nPib: %s venceu!\n", Pais2);
     } else 
     {
      printf("\n**Houve um Empate entre os Países!**\n");
     }
      break;

     case 4:
     resultado2 = (Pontos_turisticos2 > Pontos_turisticos1) ? 1 :(Pontos_turisticos1 > Pontos_turisticos2) ? 2 : 0;
     if (resultado1 == 1)
      {
       printf("\nPontos Turísticos: %s venceu!\n", Pais1);
      } else if (resultado2 == 2)
      {
       printf("\nPontos Turísticos: %s venceu!\n", Pais2);
      } else 
      {
       printf("\n**Houve um Empate entre os Países!**\n");
      }
    break;

     case 5:
     resultado2 = (densidade_demografica2 > densidade_demografica1) ? 1 :(densidade_demografica1 > densidade_demografica2) ? 2 : 0;
     if (resultado1 == 1)
     {
      printf("\nDensidadde Demográfica: %s venceu!\n", Pais1);
     } else if (resultado2 == 2)
     {
      printf("\nDensidade Demográfica: %s venceu!\n", Pais2);
     } else 
     {
      printf("\n**Houve um Empate entre os Países!**\n");
     }
      break;

     case 6:
     resultado2 = (PIB_per_capita2 > PIB_per_capita1) ? 1 :(PIB_per_capita1 > PIB_per_capita2) ? 2 : 0;
     if (resultado1 == 1)
     {
      printf("\nPib per capita: %s venceu!\n", Pais1);
     } else if (resultado2 == 2)
     {
      printf("\nPib per capita: %s venceu!\n", Pais2);
     } else 
     {
      printf("\n**Houve um Empate entre os Países!**\n");
     }
      break;

     case 7:
     resultado2 = (Super_Poder2 > Super_Poder1) ? 1 : (Super_Poder1 > Super_Poder2) ? 2 : 0;
     if (resultado1 == 1)
      {
       printf("\nSuper Poder: %s venceu!\n", Pais1);
      } else if (resultado2 == 2)
      {
       printf("\nSuper Poder: %s venceu!\n", Pais2);
      } else 
      {
       printf("\n**Houve um Empate entre os Países!**\n");
      }
    break;
      default: printf("Opção INVÁLIDA!\n");
         break;
      }

     printf("\n***RESULTADO FINAL***\n");
      if ((resultado1 == 1 && resultado2 == 1) || (resultado1 ==1 && resultado2 ==0) || (resultado1 ==0 && resultado2 == 1))
     {
        printf("%s venceu\n", Pais1);
      }
      else if ((resultado1 == 2 && resultado2 == 2) || (resultado2 == 2 && resultado1 == 0) || (resultado2 == 0 && resultado1 == 2))
        {
         printf("%s venceu\n", Pais2);
        }
         else {
            printf("\n***Houve Empate entre os Países!***\n");
         } 
      return 0;
      }