#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Declara as variáveis para as duas cartas
    int popA, popB, pturA, pturB;
    char estadoA[3], estadoB[3]; 
    char codA[10], codB[10]; 
    char cidadeA[50], cidadeB[50];
    float areaA, areaB, pibA, pibB;

    // Pede e recebe as variáveis para a primeira carta
    printf("Primeira Carta\n");
    // Estado
    printf("Insira o Estado: ");
    scanf("%s", &estadoA);
    //Código
    printf("Insira o código da carta: ");
    scanf("%s", &codA);
    //Nome da Cidade
    printf("Insira o nome da cidade: ");
    scanf("%s", &cidadeA);
    //População
    printf("Insira a população da cidade: ");
    scanf("%d", &popA);
    //Área
    printf("Insira a área (em km²) da cidade: ");
    scanf("%f", &areaA);
    //PIB
    printf("Insira o PIB da cidade: ");
    scanf("%f", &pibA);
    //Quantidade de pontos turísticos
    printf("Insira a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pturA);

    //Pede e recebe as variáveis para a segunda carta
    printf("Segunda Carta\n");
    //Estado
    printf("Insira o Estado: ");
    scanf("%s", &estadoB);
    //Código
    printf("Insira o código da carta: ");
    scanf("%s", &codB);
    //Nome da cidade
    printf("Insira o nome da cidade: ");
    scanf("%s", &cidadeB);
    //População
    printf("Insira a população da cidade: ");
    scanf("%d", &popB);
    //Área
    printf("Insira a área (em km²) da cidade: ");
    scanf("%f", &areaB);
    //PIB
    printf("Insira o PIB da cidade: ");
    scanf("%f", &pibB);
    //Quantidade de pontos turísticos
    printf("Insira a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pturB);

    printf("--------------------------------------------------");   // Coloca uma linha para separar a coleta dos resultados

    //Mostra os dados das duas cartas
    printf("\nA Carta A tem os seguintes dados: \n");
    printf("Estado: %s \nCódigo: %s%s \nNome da Cidade: %s \nPopulação: %d\n", estadoA, estadoA, codA, cidadeA, popA);
    printf("Área: %.2fkm² \nPIB: %.2f bilhões de reais \nNúmero de Pontos Turísticos: %d\n\n", areaA, pibA, pturA);

    printf("A Carta B tem os seguintes dados: \n");
    printf("Estado: %s \nCódigo: %s%s \nNome da Cidade: %s \nPopulação: %d\n", estadoB, estadoB, codB, cidadeB, popB);
    printf("Área: %.2fkm² \nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d", areaB, pibB, pturB);

    return 0;
}