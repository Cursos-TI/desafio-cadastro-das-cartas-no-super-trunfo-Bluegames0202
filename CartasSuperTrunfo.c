#include <stdio.h>

int main(){
    char estado1, estado2;
char codigodacarta1[20], codigodacarta2[20];
char nomedacidade1[50], nomedacidade2[50];
    int populaçao1,populaçao2,numerodepontosturisticos1,numerodepontosturisticos2;
    float area1,area2,pib1,pib2,pibper1,pibper2,ds1,ds2;

    //informações da primeira carta
    printf("Digite o estado da carta1:\n");
    scanf(" %s",&estado1);

    printf("Digite o código da carta1: \n");
    scanf("%s",&codigodacarta1);

    printf("Digite o nome da cidade da carta1: \n");
    scanf("%s",&nomedacidade1);

    printf("Digite a população da carta1: \n");
    scanf("%d",&populaçao1);

    printf("Digite a área da cidade da carta1 em km \n");
    scanf("%f",&area1);

    printf("Digite o PIB da carta1 \n");
    scanf("%f",&pib1);

    printf("Digite a quantidade de pontos turisticos da carta1: \n");
    scanf("%d",&numerodepontosturisticos1);
    ds1 = populaçao1 / area1;
    pibper1 = pib1 / populaçao1;

 
    //INFORMAÇÕES DA SEGUNDA CARTA
 printf("Digite o estado da carta2:\n");
    scanf("%s",&estado2);

    printf("Digite o código da carta2: \n");
    scanf("%s",&codigodacarta2);

    printf("Digite o nome da cidade da carta2: \n");
    scanf("%s",&nomedacidade2);

    printf("Digite a população da carta2: \n");
    scanf("%d",&populaçao2);

    printf("Digite a área da cidade da carta2 em km \n");
    scanf("%f",&area2);

    printf("Digite o PIB da carta2 \n");
    scanf("%f",&pib2);

    printf("Digite a quantidade de pontos turisticos da carta2: \n");
    scanf("%d",&numerodepontosturisticos2);
   
     ds2 = populaçao2 / area2;
    pibper2 = pib2 / populaçao2;
   
   
    //RESULTADO DAS CARTAS
 printf("Carta 1 \n");
 printf("Estado:%s \n",estado1);
 printf("Código:%s \n",codigodacarta1);
 printf("Cidade:%s \n",nomedacidade1);
 printf("População: %d \n",populaçao1);
 printf("Área: %.2f km \n",area1);
 printf("PIB:%.2f bilhões de reais \n",pib1);
 printf("Números de pontos turísticos: %d \n",numerodepontosturisticos1);
printf("Densidade populacao:%f hdb/km \n",ds1);
printf("Dpibper:%f hdb/km \n",pibper1);



 printf("Carta 2 \n");
 printf("Estado: %c \n",estado2);
 printf("Código: %s \n",codigodacarta2);
 printf("Cidade: %s \n",nomedacidade2);
 printf("População: %d \n",populaçao2);
 printf("Área: %.2f km \n",area2);
 printf("PIB:%.2f bilhões de reais \n",pib2);
 printf("Números de pontos turísticos: %d \n",numerodepontosturisticos2);
printf("Densidade populacao:%.2f hdb/km \n",ds2);
printf("pibper:%.2f hdb/km \n",pibper2);





 












}
