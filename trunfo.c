#include <stdio.h>

int main() {
    // Definição das variáveis para a primeira cidade
    char codigo1[20], nome1[20];
    int pontos_turisticos1, estado1;
    float area1, pib1;
    unsigned long int populacao1;

    // Definição das variáveis para a segunda cidade
    char codigo2[20], nome2[20];
    int pontos_turisticos2, estado2;
    float area2, pib2;
    unsigned long int populacao2;

    // Captura dos dados da primeira cidade
    printf("Cadastro da primeira cidade:\n");

    printf("Estado: ");
    scanf("%c", &estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome: ");
    scanf("%s", nome1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Captura dos dados da segunda cidade
    printf("\nCadastro da segunda cidade:\n");
    
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome: ");
    scanf("%s", nome2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float capital1 = pib1 / populacao1; 
    float capital2 = pib2 / populacao2; 
    float super1 = populacao1 + area1 + pib1 + pontos_turisticos1 + capital1 + densidade1;
    float super2 = populacao2 + area2 + pib2 + pontos_turisticos2 + capital2 + densidade2;

    // Exibição dos dados cadastrados
    printf("\n===== Dados das Cidades Cadastradas =====\n");

    printf("\nCidade 1:\n");

    printf("Estado: %d\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %f\n", densidade1);
    printf("Pib por capital: %f\n", capital1);
    printf("super poder: %f\n", super1);

    printf("\nCidade 2:\n");

    printf("Estado: %d\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %f\n", densidade2);
    printf("Pib por capital: %f\n", capital2);
    printf("super poder: %f\n", super2);

    printf("\n*** Comparação de Cartas: ***\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > pontos_turisticos2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade1 > densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", capital1 > capital2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super1 > super2);

    return 0;
}
