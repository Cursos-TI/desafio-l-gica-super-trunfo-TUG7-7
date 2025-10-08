#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
 // -------- Declaração das variáveis --------
    char estado1[3], codigo1[4], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1;

    char estado2[3], codigo2[4], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // (Repita para cada propriedade)
  // -------- Cadastro da Carta 1 --------
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado: ");
    scanf("%s", estado1);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); // permite ler nomes com espaço
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area (em km2): ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

     densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / (float)populacao1;

   
     // -------- Cadastro da Carta 2 --------
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado: ");
    scanf("%s", estado2);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area (em km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

 densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

     // -------- Menu Interativo --------
    int opcao;
    printf("\n===== MENU DE COMPARACAO =====\n");
    printf("1 - populacao\n");
    printf("2 - area\n");
    printf("3 - pib\n");
    printf("4 - pontosTuristicos\n");
    printf("Escolha um atributo para comparar: ");
    scanf("%d", &opcao);

    // -------- Comparação --------
    printf("\nComparacao de Cartas:\n");
    int vencedor = 0; // 0 = empate, 1 = carta1, 2 = carta2

    switch(opcao) {
        case 1: // População
            printf("Populacao: %s = %d | %s = %d\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
            if (populacao1 > populacao2) vencedor = 1;
            else if (populacao2 > populacao1) vencedor = 2;
            break;

        case 2: // Área
            printf("Area: %s = %.2f | %s = %.2f\n", nomeCidade1, area1, nomeCidade2, area2);
            if (area1 > area2) vencedor = 1;
            else if (area2 > area1) vencedor = 2;
            break;

        case 3: // PIB
            printf("PIB: %s = %.2f | %s = %.2f\n", nomeCidade1, pib1, nomeCidade2, pib2);
            if (pib1 > pib2) vencedor = 1;
            else if (pib2 > pib1) vencedor = 2;
            break;

        case 4: // Pontos turísticos
            printf("Pontos Turisticos: %s = %d | %s = %d\n", nomeCidade1, pontosTuristicos1, nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) vencedor = 1;
            else if (pontosTuristicos2 > pontosTuristicos1) vencedor = 2;
            break;

    

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
   

// -------- Exibição dos Resultados --------
    if (vencedor == 1) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (vencedor == 2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
