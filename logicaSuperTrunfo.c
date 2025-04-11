#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Aluna - Maykele
// Nível Novato

int main() {
    printf(" Desafio Cartas Super Trunfo!\n");    
    
    char estado1[20],estado2[20];
    char codigoCarta1[4], codigoCarta2[4];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    char cidadeVencedora[20];

    
    // Solicitação de dados da carta 1
    printf("Digite os dados da carta 1!\n");

    printf("Digite uma letra de 'A' a 'H' que representa o estado: \n"); 
    scanf( "%s", estado1); 

    printf("Digite a letra do estado seguida de um número de 01 a 04. (ex: A01, B02): \n"); 
    scanf( "%s", codigoCarta1); 

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);
    
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    float densidade1 = (float)populacao1 / area1; //define a densidade através de uma operação aritmética entre duas variáveis
    float pibPerCapita1 = pib1 / (float)populacao1; //define pib per capita através de uma operação aritmética entre duas variáveis
    float inversoDensidade1 = 1 / densidade1; // calcula o inverso da densidade populacional    

    float superPoder1 = ((float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + inversoDensidade1);
    

    //Solicita os dados da carta 2
    printf("\n Digite os dados da carta 2!\n");

    printf("Digite uma letra de 'A' a 'H' que representa o estado: \n");
    scanf( "%s", estado2);

    printf("Digite a letra do estado seguida de um número de 01 a 04. (ex: A01, B02): \n"); 
    scanf( "%s", codigoCarta2); 

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);
    
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    float densidade2 = (float)populacao2 / area2;
    float pibPerCapita2 = pib2 / (float)populacao2;

    float inversoDensidade2 = 1 / densidade2;    

    float superPoder2 = ((float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + inversoDensidade2);
    
    // Comparação de Cartas:
    printf("População de %s: %lu. \n", cidade1, populacao1);
    printf("População de %s: %lu. \n", cidade2, populacao2);
    if (populacao1 > populacao2)
    {
        //Criei a variável cidadeVencedora aqui dentro pois já lhe atribui o valor dependendo do valor da condicional;
        strcpy(cidadeVencedora, cidade1); //o strcpy permite copiar o valor da variável que está em formato de string;
        printf("A cidade de %s tem a maior população. \n", cidade1);
    }
    else{
        strcpy(cidadeVencedora, cidade2);
        printf("A cidade de %s tem a maior população. \n", cidade2);
    }

        printf("A cidade vencedora é %s. \n", cidadeVencedora);
  
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
