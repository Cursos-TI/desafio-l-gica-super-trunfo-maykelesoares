#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Aluna - Maykele
// Nível Mestre

int main() {
    printf(" Desafio Cartas Super Trunfo!\n");    
    
    char estado1[20],estado2[20];
    char codigoCarta1[4], codigoCarta2[4];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;    
    int atributoEscolhido1, atributoEscolhido2;
    int comparacao1, comparacao2;
    int resultado;

    
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

    
    printf("Escolha o primeiro atributo para comparar: \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Pontos turísticos \n");
    printf("5. Densidade demografica \n");
    scanf("%d", &atributoEscolhido1);

    switch (atributoEscolhido1)
    {
    case 1:
        printf("Atributo escolhido para comparação: População \n");
        printf("População de %s= %lu X População de %s= %lu \n", cidade1, populacao1, cidade2, populacao2);
        
        comparacao1 = (populacao1 > populacao2) ? 1 : 0;
        
        break;
    case 2:
        printf("Atributo escolhido para comparação: Área \n");
        printf("Área de %s= %.2f X Área de %s= %.2f \n", cidade1, area1, cidade2, area2);

        comparacao1 = (area1 > area2) ? 1 : 0;
        break;
    case 3:
        printf("Atributo escolhido para comparação: PIB \n");
        printf("PIB de %s= %.2f X PIB de %s= %.2f \n", cidade1, pib1, cidade2, pib2);

        comparacao1 = (pib1 > pib2) ? 1 : 0;
        break;
    case 4:
        printf("Atributo escolhido para comparação: Pontos turísticos \n");
        printf("Pontos Turísticos de %s= %d X Pontos Turísticos de %s= %d \n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);

        comparacao1 = (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0;
        break;
    case 5:
        printf("Atributo escolhido para comparação: Densidade demográfica \n");
        printf("Densidade demográfica de %s= %f X Densidade demográfica de %s= %f \n", cidade1, densidade1, cidade2, densidade2);

        comparacao1 = (densidade1 < densidade2) ? 1 : 0;
        break;
    
    default:
        printf("Opção inválida, tente novamente! \n");
        break;
    }

    printf("Escolha o segundo atributo para comparar: \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Pontos turísticos \n");
    printf("5. Densidade demografica \n");
    scanf("%d", &atributoEscolhido2);

    
    if(atributoEscolhido1 == atributoEscolhido2){
        printf( "Este atributo já foi selecionado, escolha outro. \n");
    } else{
            switch (atributoEscolhido2)
        {
        case 1:
            printf("Atributo escolhido para comparação: População \n");
            printf("População de %s= %lu X População de %s= %lu \n", cidade1, populacao1, cidade2, populacao2);
            
            comparacao2 = (populacao1 > populacao2) ? 1 : 0;
            
            break;
        case 2:
            printf("Atributo escolhido para comparação: Área \n");
            printf("Área de %s= %.2f X Área de %s= %.2f \n", cidade1, area1, cidade2, area2);

            comparacao2 = (area1 > area2) ? 1 : 0;
            break;
        case 3:
            printf("Atributo escolhido para comparação: PIB \n");
            printf("PIB de %s= %.2f X PIB de %s= %.2f \n", cidade1, pib1, cidade2, pib2);

            comparacao2 = (pib1 > pib2) ? 1 : 0;
            break;
        case 4:
            printf("Atributo escolhido para comparação: Pontos turísticos \n");
            printf("Pontos Turísticos de %s= %d X Pontos Turísticos de %s= %d \n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);

            comparacao2 = (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0;
            break;
        case 5:
            printf("Atributo escolhido para comparação: Densidade demográfica \n");
            printf("Densidade demográfica de %s= %f X Densidade demográfica de %s= %f \n", cidade1, densidade1, cidade2, densidade2);

            comparacao2 = (densidade1 < densidade2) ? 1 : 0;
            break;
        
        default:
            printf("Opção inválida, tente novamente! \n");
            break;
        }
    }


    resultado=comparacao1+comparacao2;
    printf("Resultado primeiro atributo para Carta 1= %d \n", comparacao1);
    printf("Resultado segundo atributo para Carta 1= %d \n", comparacao2);


    printf("Cidade 1= %s X Cidade 2= %s. \n", cidade1, cidade2);
    if (resultado == 2) {
        printf("A cidade 1 venceu nos dois atributos!\n");
    } else if (resultado == 1) {
        printf("Empate: cada cidade venceu em um atributo!\n");
    } else {
        printf("A cidade 2 venceu nos dois atributos!\n");
    }
    return 0;
}