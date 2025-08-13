#include <stdio.h>

int main(){
//área das variaveis
char estado1,estado2;
char codigodacarta1[50], codigodacarta2[50];
char nomedacidade1[50], nomedacidade2[50];
unsigned long populaçao1,populaçao2;
float area1,area2,pib1,pib2,inversodadensidade1,inversodadensidade2,super_poder1,super_poder2,Densidadepopulacional1,Densidadepopulacional2,PIBpercapital1,PIBpercapital2;
int pontoturistico1,pontoturistico2,opcao;

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

Densidadepopulacional1 = (float)populaçao1 / area1;
PIBpercapital1 = pib1 / (float)populaçao1;


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
//caulculo densidade e PIB
Densidadepopulacional2 = (float)populaçao2 / area2;
PIBpercapital2 = pib2 / (float)populaçao2;
 //Calculo do super poder
super_poder1 = (float)populaçao1 + area1 + pib1 + (float)pontoturistico1 + (float)PIBpercapital1 + (1.0 / Densidadepopulacional1);
super_poder2 = (float)populaçao2 + area2 + pib2 + (float)pontoturistico2 + (float)PIBpercapital2 + (1.0 / Densidadepopulacional2);
//Leitura das informações das cartas

 printf("Dados carta 1 \n");
 printf("Estado: %c \n",estado1);
 printf("Código:%s \n",codigodacarta1);
 printf("Nome da cidade:%s \n",nomedacidade1);
 printf("População:%lu \n",populaçao1);
 printf("Área em km:%.2f \n",area1);
 printf("PIB:%.2f \n",pib1);
 printf("Pontos turisticos: %d \n",pontoturistico1);
 printf("Densidade populacional %.2f \n",Densidadepopulacional1);
 printf("PIB per capital %.2f \n",PIBpercapital1);
 printf("Super poder: %.2f \n",super_poder1);

 printf("---------------------------------------------------------------------- \n");

 printf("Dados carta 2 \n");
 printf("Estado: %c \n",estado2);
 printf("Código:%s \n",codigodacarta2);
 printf("Nome da cidade:%s \n",nomedacidade2);
 printf("População:%lu \n",populaçao2);
 printf("Área em km:%.2f \n",area2);
 printf("PIB:%.2f \n",pib2);
 printf("Pontos turisticos: %.2d \n",pontoturistico2);
 printf("Densidade populacional %.2f \n",Densidadepopulacional2);
 printf("PIB per capital %.2f \n",PIBpercapital2);
 printf("Super poder: %.2f \n",super_poder2);

printf("---------------------------------------------------------------------- \n");

printf("Escolha o atributo para comparação \n");
printf("1.População\n");
printf("2.Área em km\n");
printf("3.PIB\n");
printf("4.Pontos turisticos\n");
printf("5.Densidade populacional\n");
printf("6.PIB per capital\n");
printf("7.Super poder\n");
printf("Opção");
scanf("%d",&opcao);



switch (opcao)
{
case 1:
    printf("Carta 1 população de %s:%lu\n",nomedacidade1,populaçao1);
    printf("Carta 2 população de %s:%lu\n",nomedacidade2,populaçao2);
     if (populaçao1 > populaçao2){
       printf ("%s venceu!\n",nomedacidade1);
    }else if (populaçao2 > populaçao1){
        printf("%s venceu!\n",nomedacidade2);
    }else{
        printf("Deu empate\n");
    }
    break;

case 2:
    printf("Carta 1 área de %s:%f\n",nomedacidade1,area1);
    printf("Carta 2 área de %s:%f\n",nomedacidade2,area2);
     if (area1 > area2){
       printf ("%s venceu!\n",nomedacidade1);
    }else if (area2 > area1){
        printf("%s venceu!\n",nomedacidade2);
    }else{
        printf("Deu empate\n");
    }
    break;
case 3:
    printf("Carta 1 PIB de %s:%f\n",nomedacidade1,pib1);
    printf("Carta 2 PIB de %s:%f\n",nomedacidade2,pib1);
     if (pib1 > pib2){
       printf ("%s venceu!\n",nomedacidade1);
    }else if (pib2 > pib1){
        printf("%s venceu!\n",nomedacidade2);
    }else{
        printf("Deu empate\n");
    }
    break;
case 4:
    printf("Carta 1 ponto turisticos de %s:%f\n",nomedacidade1,pontoturistico1);
    printf("Carta 2 ponto turisticos de %s:%f\n",nomedacidade2,pontoturistico2);
     if (pontoturistico1 > pontoturistico2){
       printf ("%s venceu!\n",nomedacidade1);
    }else if (pontoturistico2 > pontoturistico1){
        printf("%s venceu!\n",nomedacidade2);
    }else{
        printf("Deu empate\n");
    }
    break;
case 5:
    printf("Carta 1 densidade populacional de %s:%f\n",nomedacidade1,Densidadepopulacional1);
    printf("Carta 2 densidade populacional de %s:%f\n",nomedacidade2,Densidadepopulacional2);
     if (Densidadepopulacional1 < Densidadepopulacional2){
       printf ("%s venceu!\n",nomedacidade1);
    }else if (Densidadepopulacional2 < Densidadepopulacional1){
        printf("%s venceu!\n",nomedacidade2);
    }else{
        printf("Deu empate\n");
    }
    break;
case 6:
    printf("Carta 1 PIB percapital de %s:%f \n",nomedacidade1,PIBpercapital1);
    printf("Carta 2 PIB percapital de %s:%f\n",nomedacidade2,PIBpercapital2);
     if (PIBpercapital1 > PIBpercapital2){
       printf ("%s venceu!\n",nomedacidade1);
    }else if (PIBpercapital2 > PIBpercapital1){
        printf("%s venceu!\n",nomedacidade2);
    }else{
        printf("Deu empate\n");
    }
    break;
case 7:
    printf("Carta 1 PIB de %s:%f",nomedacidade1,super_poder1);
    printf("Carta 2 PIB de %s:%f",nomedacidade2,super_poder2);
     if (super_poder1 > super_poder2){
       printf ("%s venceu!\n",nomedacidade1);
    }else if (super_poder2 > super_poder1){
        printf("%s venceu!\n",nomedacidade2);
    }else{
        printf("Deu empate\n");
    }
    break;




default:
    printf("Opcao invalida\n");
break;

}



















}