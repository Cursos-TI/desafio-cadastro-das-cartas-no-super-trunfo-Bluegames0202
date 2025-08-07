#include <stdio.h>

int main(){
//área das variaveis
char estado1,estado2;
char codigodacarta1[20], codigodacarta2[20];
char nomedacidade1[50], nomedacidade2[50];
unsigned long populaçao1,populaçao2,Densidadepopulacional1,Densidadepopulacional2,PIBpercapital1,PIBpercapital2;
float area1,area2,pib1,pib2,superpoder1,superpoder2,inversodadensidade1,inversodadensidade2,super_poder1,super_poder2;
int pontoturistico1,pontoturistico2;

//Informações da primeira carta

printf("**********Informações da primeira carta********** \n");

printf("Digite um estado: \n");
scanf(" %c",&estado1);

printf("Digite o código da carta: \n");
scanf("%s",&codigodacarta1);

printf("Digite o nome da cidade: \n");
scanf("%s",&nomedacidade1);

printf("Digite a população: \n");
scanf("%lu",&populaçao1);

printf("Digite a área da cidade em km: \n");
scanf("%f",&area1);

printf("Digite o PIB: \n");
scanf("%f",&pib1);

printf("Digite a quantidade de pontos turisticos: \n");
scanf("%d",&pontoturistico1);

Densidadepopulacional1 = populaçao1 / area1;
PIBpercapital1 = pib1 / populaçao1;


//Informações da segunda carta
printf("**********Informações da segunda carta********** \n");


printf("Digite um estado: \n");
scanf(" %c",&estado2);

printf("Digite o código: \n");
scanf("%s",&codigodacarta2);

printf("Digite o nome da cidade: \n");
scanf("%s",&nomedacidade2);

printf("Digite a população: \n");
scanf("%lu",&populaçao2);

printf("Digite a área da cidade em km: \n");
scanf("%f",&area2);

printf("Digite o PIB: \n");
scanf("%f",&pib2);

printf("Digite a quantidade de pontos turisticos: \n");
scanf("%d",&pontoturistico2);

Densidadepopulacional2 = populaçao2 / area2;
PIBpercapital2 = pib2 / populaçao2;

//Leitura das informações das cartas

 printf("Dados carta 1 \n");
 printf("Estado: %c \n",estado1);
 printf("Código:%s \n",codigodacarta1);
 printf("Nome da cidade:%s \n",nomedacidade1);
 printf("População:%lu \n",populaçao1);
 printf("Área em km:%.2f \n",area1);
 printf("PIB:%.2f \n",pib1);
 printf("Pontos turisticos: %d \n",pontoturistico1);
 printf("Densidade populacional %lu \n",Densidadepopulacional1);
 printf("PIB per capital %lu \n",PIBpercapital1);

 printf("Dados carta 1 \n");
 printf("Estado: %c \n",estado2);
 printf("Código:%s \n",codigodacarta2);
 printf("Nome da cidade:%s \n",nomedacidade2);
 printf("População:%lu \n",populaçao2);
 printf("Área em km:%.2f \n",area2);
 printf("PIB:%.2f \n",pib2);
 printf("Pontos turisticos: %d \n",pontoturistico2);
 printf("Densidade populacional %lu \n",Densidadepopulacional2);
 printf("PIB per capital %lu \n",PIBpercapital2);
 
 //Calculo do super poder
super_poder1 = (float)populaçao1 + area1 + pib1 + (float)pontoturistico1 + (float)PIBpercapital1 + (1.0 / Densidadepopulacional1);
super_poder2 = (float)populaçao2 + area2 + pib2 + (float)pontoturistico2 + (float)PIBpercapital2 + (1.0 / Densidadepopulacional2);

//comparação de cartas
float comparacaopopulaçao,compraçaoarea,comparaçaopib,comparaçaopontoturistico,comparaçaodensidadepopulacional,comparaçaopibper,comparaçaosuperpoder;
 comparacaopopulaçao = (float)populaçao1 >= populaçao2;
 compraçaoarea = area1 >= area2;
 comparaçaopib = pib1 >= pib2;
 comparaçaopontoturistico = (float)pontoturistico1 >= pontoturistico2;
 comparaçaodensidadepopulacional = (float)Densidadepopulacional1 <= Densidadepopulacional2;
 comparaçaopibper =(float) PIBpercapital1 >= PIBpercapital2;
 comparaçaosuperpoder = superpoder1 >= superpoder2;
//carta vencedora 
printf("CARTA VENCEDORA (Ganhado é representado por (1) e perdedor é reprsentado por (0)) \n");
printf("População: Carata 1 venceu: (%.0f) \n",comparacaopopulaçao);
printf("Área:Carata 1 venceu: (%.0f) \n",compraçaoarea);
printf("PIB: Carata 1 venceu: (%.0f) \n",comparaçaopib);
printf("Pontos Turísticos: Carata 1 venceu: (%.0f) \n",comparaçaopontoturistico);
printf("Densidade Populacional: Carata 1 venceu: (%.0f) \n",comparaçaodensidadepopulacional);
printf("PIB per Capita: Carata 1 venceu: (%.0f) \n",comparaçaopibper);
printf("Super Poder: Carata 1 venceu: (%.0f) \n",comparaçaosuperpoder);



}