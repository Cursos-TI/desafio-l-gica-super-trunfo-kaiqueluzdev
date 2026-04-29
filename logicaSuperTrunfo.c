#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
       char estado1, estado2; 
    char nomeCidade1[50], nomeCidade2[50];
    char codigoCarta1[10], codigoCarta2[10];
    int pontosTuristicos1, pontosTuristicos2;
    long int populacao1, populacao2;
    float areaKm1, areaKm2, pib1, pib2;
    float densidadePopulacao1, pibPerCapita1, densidadePopulacao2, pibPerCapita2;
    
    //CARTA NUMERO 1

    printf("Informe os dados da Carta 1\n");

    printf("Digite o Estado: "); //PEDE AO USUARIO QUAL O ESTADO ELE QUER
    scanf(" %c", &estado1); // GUARDA O QUE O USARIO ESCREVE

    printf("Digite o Código da Carta: ");   //PEDE AO USUARIO QUAL O CODIGO DA CARTA
    scanf(" %s", codigoCarta1); // GUARDA O QUE O USARIO ESCREVE

    printf("Digite o nome da cidade: "); //PEDE AO USUARIO QUAL O NOME DA CIDADE ELE QUER
    scanf(" %[^\n]", nomeCidade1); // GUARDA O QUE O USARIO ESCREVE

    printf("Digite o tamanho da População: "); //PEDE AO USUARIO O TAMANHO DA POPULAÇÃO
    scanf("%lu", &populacao1); // GUARDA O QUE O USARIO ESCREVE

    printf("Digite a Area em KM: "); //PEDE PARA O USUARIO COLOCAR A AREA EM KM
    scanf("%f", &areaKm1); // GUARDA O QUE O USARIO ESCREVE

    printf("Digite o PIB: (Em Bilhões de Reais) "); //PEDE AO USUARIO O PIB 
    scanf("%f", &pib1); // GUARDA O QUE O USARIO ESCREVE

    printf("Digite o numero de pontos turisticos: "); //PEDE AO USUARIO O NUMERO DE PONTOS TURISTICOS
    scanf("%d", &pontosTuristicos1);


    densidadePopulacao1 = (float)populacao1 / areaKm1; //calcula a densidade da população

    pibPerCapita1 = (pib1 * 1e9) / (float)populacao1; // calcula o PIB Per Capita
    // (pib1 * 1000000000.0) transforma o valor do pib em bilhão.


     printf("\n");

    //CARTA NUMERO 2

    printf("Agora informe os dados da Carta 2\n");

    printf("Digite o Estado: "); 
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta: ");   
    scanf(" %s", codigoCarta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    
    printf("Digite o tamanho da População: "); 
    scanf("%lu", &populacao2);

    printf("Digite a Area em KM: "); 
    scanf("%f", &areaKm2);

    printf("Digite o PIB: (Em Bilhões de Reais) ");  
    scanf("%f", &pib2);  

    printf("Digite o numero de pontos turisticos: "); 
    scanf("%d", &pontosTuristicos2);


    densidadePopulacao2 = (float)populacao2 / areaKm2;

    pibPerCapita2 = (pib2 * 1e9) /(float)populacao2;


    printf("\n");

    //IMPRIMINDO O RESULTADO

    printf("CARTA 1 \n");  
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", areaKm1);
    printf("PIB: %.2f Bilhôes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacao1);
    printf("PIB Per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n");

    printf("CARTA 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", areaKm2);
    printf("PIB: %.2f Bilhôes reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacao2);
    printf("PIB Per Capita: %.2f reais\n", pibPerCapita2);


    printf("\n");

    float superpoder1, superpoder2;

    superpoder1 = (float)populacao1 + pib1 + pibPerCapita1 + areaKm1 + (float)pontosTuristicos1 + (areaKm1 / (float)populacao1);

    superpoder2 = (float)populacao2 + pib2 + pibPerCapita2 + areaKm2 + (float)pontosTuristicos2 + (areaKm2 / (float)populacao2);


    printf("\n");
    printf("Comparação de cartas (Atributo: População): \n");

    if (populacao1 > populacao2){
        printf("Carta 1 - %s: %lu\n", nomeCidade1, populacao1);
        printf("Carta 2 - %s: %lu\n", nomeCidade2, populacao2);
        printf("Carta 1 venceu na comparação entre população!\n");
        printf("A cidade vencedora é: %s\n", nomeCidade1);
    } else{
        printf("Carta 1 - %s: %lu\n", nomeCidade1, populacao1);
        printf("Carta 2 - %s: %lu\n", nomeCidade2, populacao2);
        printf("Carta 2 venceu na comparação entra população!\n");
        printf("A cidade vencedora é: %s\n", nomeCidade2);
    }

    return 0;
}
