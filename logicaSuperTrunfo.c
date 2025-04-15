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
    int atributoEscolhido;

    
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


    printf("Escolha um atributo para comparar: \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Pontos turísticos \n");
    printf("5. Densidade demografica \n");
    scanf("%d", &atributoEscolhido);

    switch (atributoEscolhido)
    {
    case 1:
        printf("Atributo escolhido para comparação: População \n");
        break;
    case 2:
        printf("Atributo escolhido para comparação: Área \n");
        break;
    case 3:
        printf("Atributo escolhido para comparação: PIB \n");
        break;
    case 4:
        printf("Atributo escolhido para comparação: Pontos turísticos \n");
        break;
    case 5:
        printf("Atributo escolhido para comparação: Densidade demográfica \n");
        break;
    
    default:
        printf("Opção inválida, tente novamente! \n");
        break;
    }
    
   //Comparação de Cartas:
    if(atributoEscolhido == 1){
        if(populacao1 > populacao2){
            printf("%s X %s. \n", cidade1, cidade2);
            printf("População de %s= %lu X População de %s= %lu \n", cidade1, populacao1, cidade2, populacao2);
            printf("### Carta 1 = '%s' venceu!!! ###\n", cidade1);

        } else if(populacao1 < populacao2){
            printf("%s X %s. \n", cidade1, cidade2);
            printf("População de %s= %lu X População de %s= %lu \n", cidade1, populacao1, cidade2, populacao2);
            printf("### Carta 2 = '%s' venceu!!! ###\n", cidade2);    

        } else{            
            printf("%s X %s. \n", cidade1, cidade2);
            printf("População de %s= %lu X População de %s= %lu \n", cidade1, populacao1, cidade2, populacao2);
            printf("### EMPATE!!! ###\n");          
        }
    }

    if(atributoEscolhido == 2){
        if(area1 > area2){
            printf("%s X %s. \n", cidade1, cidade2);
            printf("Área de %s= %.2f X Área de %s= %.2f \n", cidade1, area1, cidade2, area2);
            printf("### Carta 1 = '%s' venceu!!! ###\n", cidade1);

        } else if(area1 < area2){
            printf("%s X %s. \n", cidade1, cidade2);
            printf("Área de %s= %.2f X Área de %s= %.2f \n", cidade1, area1, cidade2, area2);
            printf("### Carta 2 = '%s' venceu!!! ###\n", cidade2);

        } else{
            printf("%s X %s. \n", cidade1, cidade2);
            printf("Área de %s= %.2f X Área de %s= %.2f \n", cidade1, area1, cidade2, area2);
            printf("### EMPATE!!! ###\n");
        }
    }

    if(atributoEscolhido == 3){
        if(pib1 > pib2){
            printf("%s X %s. \n", cidade1, cidade2);
            printf("PIB de %s= %.2f X PIB de %s= %.2f \n", cidade1, pib1, cidade2, pib2);
            printf("### Carta 1 = '%s' venceu!!! ###\n", cidade1);

        } else if(pib1 < pib2){
            printf("%s X %s. \n", cidade1, cidade2);
            printf("PIB de %s= %.2f X PIB de %s= %.2f \n", cidade1, pib1, cidade2, pib2);
            printf("### Carta 2 = '%s' venceu!!! ###\n", cidade2);
            
        } else{
            printf("%s X %s. \n", cidade1, cidade2);
            printf("PIB de %s= %.2f X PIB de %s= %.2f \n", cidade1, pib1, cidade2, pib2);
            printf("### EMPATE!!! ###\n");
        }
    }

    if(atributoEscolhido == 4){
        if(pontosTuristicos1 > pontosTuristicos2){
            printf("%s X %s. \n", cidade1, cidade2);
            printf("Pontos Turísticos de %s= %d X Pontos Turísticos de %s= %d \n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);
            printf("### Carta 1 = '%s' venceu!!! ###\n", cidade1);

        } else if(pontosTuristicos1 < pontosTuristicos2){
            printf("%s X %s. \n", cidade1, cidade2);
            printf("Pontos Turísticos de %s= %d X Pontos Turísticos de %s= %d \n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);
            printf("### Carta 2 = '%s' venceu!!! ###\n", cidade2);

        } else{
            printf("%s X %s. \n", cidade1, cidade2);
            printf("Pontos Turísticos de %s= %d X Pontos Turísticos de %s= %d \n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);
            printf("### EMPATE!!! ###\n");
        }
    }

    if(atributoEscolhido == 5){
        if(densidade1 < densidade2){
            printf("%s X %s. \n", cidade1, cidade2);
            printf("Densidade demográfica de %s= %f X Densidade demográfica de %s= %f \n", cidade1, densidade1, cidade2, densidade2);
            printf("### Carta 1 = '%s' venceu!!! ###\n", cidade1);

        } else if(densidade1 > densidade2){
            printf("%s X %s. \n", cidade1, cidade2);
            printf("Densidade demográfica de %s= %f X Densidade demográfica de %s= %f \n", cidade1, densidade1, cidade2, densidade2);
            printf("### Carta 2 = '%s' venceu!!! ###\n", cidade2);

        } else{
            printf("%s X %s. \n", cidade1, cidade2);
            printf("Densidade demográfica de %s= %f X Densidade demográfica de %s= %f \n", cidade1, densidade1, cidade2, densidade2);
            printf("### EMPATE!!! ###\n");
        }
    }
    
    return 0;
}
