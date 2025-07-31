#include <stdio.h>
//codigos
char estado[] = {'A','B','C','D','E','F','G','H'};//codigo de estado de A a H

//Informaçoes do usuarios
char cidade[20];//Nome da cidade

int numcard = 0;//Numero da carta
int populus;//População
int turismo;//Pontos turisticos

float area;//Tamanho da area
float pib;//PIB

int main() {

    //A primeira carta começa aqui
    printf("Qual o nome da Cidade? \n");
    scanf("%s", &cidade);

    printf("Qual o numero da população? \n");
    scanf("%d", &populus);

    printf("Qual o tamanho da Area da cidade em Km²? \n");
    scanf("%f", &area);

    printf("Qual o PIB desta cidade? \n");
    scanf("%f", &pib);

    printf("Qual o numero de pontos turisticos na cidade? \n");
    scanf("%d", &turismo);

    numcard++;//adiciona um numero ao codigo
    int stdX = 0;//Define o codigo de estado como 0 que seria "A"

    printf("Carta %d: \nEstado: %c \n", numcard, estado[stdX]); //Carta #
    printf("Codigo: %c0%d \n",estado[stdX], numcard);//Codigo: A0#
    printf("Nome da Cidade: %s \n", cidade);//Nome da cidade: Belem
    printf("População: %d \n", populus);//População: 150000
    printf("Área: %f Km² \n", area);//Àrea: 1500.10 Km²
    printf("PIB: %f Bilhoes de reais \n", pib);//PIB: 600.20 bilhoes de reais
    printf("Numero de Pontos Turísticos: %d \n", turismo);//Numero de Pontos Turísticos: 10

    //A segunda carta começa aqui

    printf("Qual o nome da Cidade? \n");
    scanf("%s", &cidade);

    printf("Qual o numero da população? \n");
    scanf("%d", &populus);

    printf("Qual o tamanho da Area da cidade em Km²? \n");
    scanf("%f", &area);

    printf("Qual o PIB desta cidade? \n");
    scanf("%f", &pib);

    printf("Qual o numero de pontos turisticos na cidade? \n");
    scanf("%d", &turismo);

    numcard++;//adiciona um numero ao codigo
    stdX++;//puxa o numero de estado por 1 digito, nesse caso 1="B"

    printf("Carta %d: \nEstado: %c \n", numcard, estado[stdX]); //Carta #
    printf("Codigo: %c0%d \n",estado[stdX], numcard);//Codigo: A0#
    printf("Nome da Cidade: %s \n", cidade);//Nome da cidade: Belem
    printf("População: %d \n", populus);//População: 150000
    printf("Área: %f Km² \n", area);//Àrea: 1500.10 Km²
    printf("PIB: %f Bilhoes de reais \n", pib);//PIB: 600.20 bilhoes de reais
    printf("Numero de Pontos Turísticos: %d \n", turismo);//Numero de Pontos Turísticos: 10

    return 0;
}