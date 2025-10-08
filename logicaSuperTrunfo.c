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
int atributo1, atributo2; // ✅ Adicionadas aqui
int opcao; // (pode até remover se não usar mais “opcao”)

printf("\n===== MENU DE COMPARACAO =====\n");
printf("1 - Populacao\n");
printf("2 - Area\n");
printf("3 - PIB\n");
printf("4 - Pontos Turisticos\n");
printf("5 - Densidade Demografica\n");
printf("Escolha o primeiro atributo para comparar: ");
scanf("%d", &atributo1);

// Menu dinâmico
printf("\n===== MENU (SEGUNDO ATRIBUTO) =====\n");
for (int i = 1; i <= 5; i++) {
    if (i == atributo1) continue; // não mostra o mesmo atributo
    switch (i) {
        case 1: printf("1 - Populacao\n"); break;
        case 2: printf("2 - Area\n"); break;
        case 3: printf("3 - PIB\n"); break;
        case 4: printf("4 - Pontos Turisticos\n"); break;
        case 5: printf("5 - Densidade Demografica\n"); break;
    }
}

printf("Escolha o SEGUNDO atributo: ");
scanf("%d", &atributo2);

if (atributo1 == atributo2) {
    printf("\nErro: Os dois atributos devem ser diferentes!\n");
    return 0;
}


     // -------- Comparações --------
    float soma1 = 0, soma2 = 0;
    int vencedor1 = 0, vencedor2 = 0;

    // Função auxiliar de comparação
    for (int i = 1; i <= 2; i++) {
        int atributo = (i == 1) ? atributo1 : atributo2;
        switch (atributo) {
            case 1: // População
                printf("\nPopulacao: %s = %d | %s = %d\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
                vencedor1 = (populacao1 > populacao2) ? 1 : (populacao2 > populacao1 ? 2 : 0);
                soma1 += populacao1; soma2 += populacao2;
                break;
            case 2: // Área
                printf("\nArea: %s = %.2f | %s = %.2f\n", nomeCidade1, area1, nomeCidade2, area2);
                vencedor1 = (area1 > area2) ? 1 : (area2 > area1 ? 2 : 0);
                soma1 += area1; soma2 += area2;
                break;
            case 3: // PIB
                printf("\nPIB: %s = %.2f | %s = %.2f\n", nomeCidade1, pib1, nomeCidade2, pib2);
                vencedor1 = (pib1 > pib2) ? 1 : (pib2 > pib1 ? 2 : 0);
                soma1 += pib1; soma2 += pib2;
                break;
            case 4: // Pontos turísticos
                printf("\nPontos Turisticos: %s = %d | %s = %d\n", nomeCidade1, pontosTuristicos1, nomeCidade2, pontosTuristicos2);
                vencedor1 = (pontosTuristicos1 > pontosTuristicos2) ? 1 : (pontosTuristicos2 > pontosTuristicos1 ? 2 : 0);
                soma1 += pontosTuristicos1; soma2 += pontosTuristicos2;
                break;
            case 5: // Densidade (menor vence)
                printf("\nDensidade Demografica: %s = %.2f | %s = %.2f\n", nomeCidade1, densidade1, nomeCidade2, densidade2);
                vencedor1 = (densidade1 < densidade2) ? 1 : (densidade2 < densidade1 ? 2 : 0);
                soma1 += densidade1; soma2 += densidade2;
                break;
            default:
                printf("\nAtributo invalido!\n");
                return 0;
        }
        // Mostra quem venceu este atributo
        if (vencedor1 == 1)
            printf("Vencedor neste atributo: %s\n", nomeCidade1);
        else if (vencedor1 == 2)
            printf("Vencedor neste atributo: %s\n", nomeCidade2);
        else
            printf("Empate neste atributo!\n");
    }

    // -------- Soma dos atributos --------
    printf("\nSoma dos atributos:\n");
    printf("%s = %.2f | %s = %.2f\n", nomeCidade1, soma1, nomeCidade2, soma2);

    int vencedorFinal = (soma1 > soma2) ? 1 : (soma2 > soma1 ? 2 : 0);

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
   

 // -------- Exibição final --------
    if (vencedorFinal == 1)
        printf("\nResultado Final: Carta 1 (%s) venceu a rodada!\n", nomeCidade1);
    else if (vencedorFinal == 2)
        printf("\nResultado Final: Carta 2 (%s) venceu a rodada!\n", nomeCidade2);
    else
        printf("\nResultado Final: Empate!\n");

    return 0;
}
