#include <stdio.h>
#include <string.h>

int main() {

//codigos
char estado1[10], estado2[10];

//Informaçoes do usuarios
char cidade1[20], cidade2[20];//Nome da cidade

int carta1, carta2;
int numcard1 = 0, numcard2 = 0;//Numero da carta
int turismo1, turismo2;//Pontos turisticos
int codigo1, codigo2;

float area1, area2;//Tamanho da area
float populus1, populus2;//População
float pib1, pib2;//PIB

//Primeira carta começa aqui
    printf("Bem vindo ao Super Trunfo! preencha os dados abaixo \n");

    //A primeira carta começa aqui
    printf("Escolha o numero da carta de 1 a 4 \n");
    scanf("%d", &carta1);
    
    printf("Adicione um codigo de 1 a 4 \n");
    scanf("%d", &codigo1);

    printf("Qual a primeira letra do estado? \n");
    scanf("%s", &estado1);

    getchar();//Essa função conserta o erro de fgets() sendo ignorado
    printf("Qual o nome da Cidade? \n");
    fgets(cidade1, 180, stdin);

    printf("Qual o numero da população? \n");
    scanf("%f", &populus1);

    printf("Qual o tamanho da Area da cidade em Km²? \n");
    scanf("%f", &area1);

    printf("Qual o PIB desta cidade? \n");
    scanf("%f", &pib1);

    printf("Qual o numero de pontos turisticos na cidade? \n");
    scanf("%d", &turismo1);

    printf("Carta %d: \nEstado: %c \n", carta1, estado1); //Numero da carta e Estado A
    printf("Codigo: %s0%d \n",estado1, codigo1);//Codigo: A0#
    printf("Nome da Cidade: %s \n", cidade1);//Nome da cidade: Belem
    printf("População: %f \n", populus1);//População: 150000
    printf("Área: %f Km² \n", area1);//Àrea: 1500.10 Km²
    printf("PIB: %f Bilhoes de reais \n", pib1);//PIB: 600.20 bilhoes de reais
    printf("Numero de Pontos Turísticos: %d \n", turismo1);//Numero de Pontos Turísticos: 10

    float densidade1 = populus1 / area1;
    float pibcapita1 = pib1 / populus1;

    printf("Densidade populacional: %f hab/Km² \n", densidade1);
    printf("PIB per Capita: %f reais \n", pibcapita1);

// A segunda carta começa aqui
    printf("Agora vamos criar a segunda carta! \n");
   
    printf("Escolha o numero da carta de 1 a 4 \n");
    scanf("%d", &carta2);
    
    printf("Adicione um codigo de 1 a 4 \n");
    scanf("%d", &codigo2);

    printf("Qual a primeira letra do estado? \n");
    scanf("%s", &estado2);

    getchar();

    printf("Qual o nome da Cidade? \n");
    fgets(cidade2, 180, stdin);

    printf("Qual o numero da população? \n");
    scanf("%f", &populus2);

    printf("Qual o tamanho da Area da cidade em Km²? \n");
    scanf("%f", &area2);

    printf("Qual o PIB desta cidade? \n");
    scanf("%f", &pib2);

    printf("Qual o numero de pontos turisticos na cidade? \n");
    scanf("%d", &turismo2);

    printf("Carta %d: \nEstado: %c \n", carta2, estado2); //Numero da carta e Estado A
    printf("Codigo: %s0%d \n",estado2, codigo2);//Codigo: A0#
    printf("Nome da Cidade: %s \n", cidade2);//Nome da cidade: Belem
    printf("População: %f \n", populus2);//População: 150000
    printf("Área: %f Km² \n", area2);//Àrea: 1500.10 Km²
    printf("PIB: %f Bilhoes de reais \n", pib2);//PIB: 600.20 bilhoes de reais
    printf("Numero de Pontos Turísticos: %d \n", turismo2);//Numero de Pontos Turísticos: 10

    float densidade2 = populus2 / area2;
    float pibcapita2 = pib2 / populus2;

    printf("Densidade populacional: %f hab/Km² \n", densidade2);
    printf("PIB per Capita: %f reais \n", pibcapita2);
    
    return 0;
}
